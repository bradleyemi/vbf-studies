import ROOT
import matplotlib.pyplot as plt
from array import array
import numpy as np

x_min = 0
x_max = 40
grid_size_x = 1
y_min = 80
y_max = 300
grid_size_y = 5

# open the files
signal_file = ROOT.TFile('VBF.root')
data_file = ROOT.TFile('data_copy.root')

def retrieve_stats(tfile, filter_low_pt=False, pt_thresh=140.0, n_events=None):
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
            
    return mBB, npv, weights

def make_color():
    red = array('d', [0.0, 1.0, 1.0])
    green = array('d', [0.0, 1.0, 0.0])
    blue = array('d', [1.0, 1.0, 0.0])
    length = array('d', [0.0, 0.5, 1.0])
    ROOT.TColor.CreateGradientColorTable(3, length, red, green, blue, 50)

def make_1D_hist(npv_signal, npv_data, weights_signal):
    c = ROOT.TCanvas('c', 'canvas', 200, 10, 700, 500)
    c.Divide(1,2)
    h_signal = ROOT.TH1D('npv_signal', 'Distribution of NPV in signal region',
                         (x_max-x_min)/grid_size_x, x_min, x_max)
    h_data = ROOT.TH1D('npv_data', 'Distribution of NPV in data, stripped of signal region',
                         (x_max-x_min)/grid_size_x, x_min, x_max)
    for n, w in zip(npv_signal, weights_signal):
        h_signal.Fill(n, w)
    for n in npv_data:
        h_data.Fill(n)
    c.cd(1)
    h_signal.Draw()
    c.cd(2)
    h_data.Draw()
    c.Update()
    ROOT.gApplication.Run()


def make_2D_hist(mBB_signal, npv_signal, weights_signal, mBB_data, npv_data):
    c = ROOT.TCanvas('c','canvas', 200,10,700,500)
    c.Divide(2,1)
    make_color()
    h_signal = ROOT.TH2D('h_signal', 'Distribution of npv, mBB in signal region',
                      (x_max-x_min)/grid_size_x, x_min, x_max,
                      (y_max-y_min)/grid_size_y, y_min, y_max)
    h_data = ROOT.TH2D('h_data', 'Distribution of npv, mBB in data, stripped of signal region',
                       (x_max-x_min)/grid_size_x, x_min, x_max,
                       (y_max-y_min)/grid_size_y, y_min, y_max)
    for m, n, w in zip(mBB_signal, npv_signal, weights_signal):
        h_signal.Fill(n, m, w)
    for m, n in zip(mBB_data, npv_data):
        h_data.Fill(n, m)

    c.cd(1)
    h_signal.Draw("COLZ")
    c.cd(2)
    h_data.Draw("COLZ")
    c.Update()
    ROOT.gApplication.Run()

def get_vertex_bins(npv_signal, npv_data):
    bins = [5.0, 10.0, 15.0, 20.0]
    signal = [0] * 4
    background = [0] * 4
    for n in npv_signal:
        bin = int(np.floor(n / 5) - 1)
        if bin >= 0 and bin < 4:
            signal[bin] += 1
    for n in npv_data:
        bin = int(np.floor(n / 5) - 1)
        if bin >= 0 and bin < 4:
            background[bin] += 1
    x = [bin + 2.5 for bin in bins]
    n_signal = sum(signal)
    n_background = sum(background)
    print n_signal
    print n_background
    signal_normalized = [float(s) / n_signal for s in signal]
    background_normalized = [float(s) / n_background for s in background]
    print signal_normalized

    plt.errorbar(x, signal_normalized, xerr=2.5, color='red', fmt='o')
    plt.errorbar(x, background_normalized, xerr=2.5, color='blue', fmt='o')
    plt.show()


mBB_signal, npv_signal, weights_signal = retrieve_stats(signal_file)
mBB_data, npv_data, weights_data = retrieve_stats(data_file, n_events=100000)
get_vertex_bins(npv_signal, npv_data)

