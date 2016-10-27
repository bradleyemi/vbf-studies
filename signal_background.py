import ROOT
import matplotlib.pyplot as plt
import numpy as np

from FitFunctions import BernsteinO3

# open the files
SIGNAL_FILE = ROOT.TFile('VBF.root')
DATA_FILE = ROOT.TFile('data_copy.root')

x_min = 80
x_max = 300
bin_width = 1

def retrieve_stats(tfile, filter_low_pt=True, pt_thresh=140.0, n_events=None):
    chain = tfile.Get('Nominal')
    entries = chain.GetEntriesFast()
    mBB = []
    npv = []
    weights = []
    for jentry in xrange( entries ):
        print "Entry", jentry
        if jentry == n_events:
            break
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
        
        if (not filter_low_pt) or (chain.pTBB * 0.001 > pt_thresh):
            mBB.append(chain.mBB * 0.001)
            npv.append(chain.npv)
            weights.append(chain.eventWeight)
            
    return npv, weights, mBB

def find_s(signal_file, npv_min, npv_max):
    npv, weights, mBB = retrieve_stats(signal_file)
    n_events_in_npv_range = sum([1 for v in npv if (v > npv_min) and (v < npv_max)])
    return n_events_in_npv_range

def find_b(data_file, npv_min, npv_max):
    npv, weights, mBB = retrieve_stats(data_file)
    mBB_data = [mBB[i] for i in range(len(mBB))
                 if (npv[i] > npv_min) and (npv[i] < npv_max)]
    h_mbb = ROOT.TH1D('h', 'm(bb), data', (x_max-x_min)/bin_width, x_min, x_max)
    map(h_mbb.Fill, mBB_data)
    c1 = ROOT.TCanvas('c','canvas', 200,10,700,500)
    h_mbb.Fit("BernsteinO3")
    fit_function = h_mbb.GetFunction("BernsteinO3")
    h_mbb.Draw("COLZ")
    c1.Update()
    n_events_in_npv_range = fit_function.Integral(100, 140)
    #print n_events_in_npv_range
    #ROOT.gApplication.Run()
    return n_events_in_npv_range

def graph_sb(signal_file, data_file):
    v_min_values = [5,10,15,20]
    signal = [find_s(signal_file, v_min, v_min + 5) for v_min in v_min_values]
    data = [find_b(data_file, v_min, v_min + 5) for v_min in v_min_values]
    s_root_b_ratio = [float(s)/np.sqrt(b) for s, b in zip(signal, data)]
    v_plot = [v_min + 2.5 for v_min in v_min_values]
    #plt.errorbar(v_plot, signal, xerr=2.5, fmt='o', color='r')
    #plt.errorbar(v_plot, data, xerr=2.5, fmt='o', color='b')
    plt.errorbar(v_plot, s_root_b_ratio, xerr=2.5, fmt='o', color='g')
    #plt.title("Number of signal (red) and background (blue) events by n primary vertices")
    plt.title("Signal to sqrt(background) ratio")
    plt.xlabel("npv")
    plt.show()


graph_sb(SIGNAL_FILE, DATA_FILE)

