import ROOT
from rootpy.plotting.style import get_style, set_style
from rootpy.plotting import Hist, Canvas
import rootpy.plotting.root2matplotlib as rplt
import matplotlib.pyplot as plt

from FitFunctions import BernsteinO2

set_style('ATLAS', mpl=True)

x_min = 80
x_max = 300
bin_width = 2

# open the files
signal_file = ROOT.TFile( 'VBF.root' )
data_file = ROOT.TFile('data_copy.root')

def retrieve_stats(tfile, var="mbb", filter_low_pt=False, pt_thresh=140.0):
    chain = tfile.Get('Nominal')
    entries = chain.GetEntriesFast()
    values = []
    values_no_corr = []
    for jentry in xrange( entries ):
        print "Event", jentry
        # get the next tree in the chain and verify
        ientry = chain.LoadTree( jentry )
        if ientry < 0:
            break

       # copy next entry into memory and verify
        nb = chain.GetEntry( jentry )
        if nb <= 0:
            continue

        # use the values directly from the tree
        nEvent = int(chain.eventNumber)
        if nEvent < 0:
            continue
        
        if var == "mbb":
            if (not filter_low_pt) or (chain.pTBB * 0.001 > pt_thresh):
                values.append(chain.mBB * 0.001)
                values_no_corr.append(chain.mBB_no_corr * 0.001)

        elif var == "ptbb":
            values.append(chain.pTBB * 0.001)
            values_no_corr.append(chain.pTBB_no_corr * 0.001)

    return values, values_no_corr


def make_root_1D_hist(data, bins, x_min, x_max,
                      fill_style='solid', fill_color='green', linecolor='green', linewidth=0):

    h = Hist(bins, x_min, x_max)
    map(h.Fill, data)
    h.fillstyle = 'solid'
    h.fillcolor = 'white'
    h.linecolor = 'blue'
    h.linewidth = 1
    return h

def compare_mbb_signal_and_data():
    fig, ax = plt.subplots(2, 2, figsize=(20, 10), dpi=100)
    ax[0,0].set_title("mBB: VBF Simulation (correction applied)")
    ax[0,1].set_title("mBB: VBF Simulation (no correction)")
    ax[1,0].set_title("mBB: Data, signal region removed (correction applied)")
    ax[1,1].set_title("mBB: Data, signal region removed (no correction)")
    rplt.hist(make_root_1D_hist(mbbs_signal, 50, 0, 5e2), axes=ax[0,0])
    rplt.hist(make_root_1D_hist(mbbs_signal_no_corr, 50, 0, 5e2), axes=ax[0,1])
    rplt.hist(make_root_1D_hist(mbbs_data, 50, 0, 5e2), axes=ax[1,0])
    rplt.hist(make_root_1D_hist(mbbs_data_no_corr, 50, 0, 5e2), axes=ax[1,1])

    if not ROOT.gROOT.IsBatch():
        plt.show()

def compare_ptbb_signal_and_data():
    ptbbs_signal, ptbbs_signal_no_corr = retrieve_stats(signal_file, var="ptbb")
    ptbbs_data, ptbbs_data_no_corr = retrieve_stats(data_file, var="ptbb")

    fig, ax = plt.subplots(2, 2, figsize=(20, 10), dpi=100)
    ax[0,0].set_title("pTBB: VBF Simulation (correction applied)")
    ax[0,1].set_title("pTBB: VBF Simulation (no correction)")
    ax[1,0].set_title("pTBB: Data, signal region removed (correction applied)")
    ax[1,1].set_title("pTBB: Data, signal region removed (no correction)")
    rplt.hist(make_root_1D_hist(ptbbs_signal, 50, 0, 3e2), axes=ax[0,0])
    rplt.hist(make_root_1D_hist(ptbbs_signal_no_corr, 50, 0, 3e2), axes=ax[0,1])
    rplt.hist(make_root_1D_hist(ptbbs_data, 50, 0, 3e2), axes=ax[1,0])
    rplt.hist(make_root_1D_hist(ptbbs_data_no_corr, 50, 0, 3e2), axes=ax[1,1])

    if not ROOT.gROOT.IsBatch():
        plt.show()


def fit_and_display_mbb():
    # mBB fitting
    mbbs_signal, mbbs_signal_no_corr = retrieve_stats(signal_file, var="mbb", filter_low_pt=True)
    
    mBBs_data, mbbs_data_no_corr = retrieve_stats(data_file, var="mbb", filter_low_pt=True)
    c1 = ROOT.TCanvas('c','canvas', 200,10,700,500)

    h_mbb = ROOT.TH1D('h', 'M(bb), data with signal region removed', (x_max-x_min)/bin_width, x_min, x_max)
    map(h_mbb.Fill, mbbs_data)
    h_mbb.Fit("BernsteinO3")

    h_mbb.Draw("COLZ")
    c1.Update()
    ROOT.gApplication.Run()


if __name__ == '__main__':
    fit_and_display_mbb()

