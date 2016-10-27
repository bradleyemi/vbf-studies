from ROOT import TF1, TH1D, TFile
import random as rand
from math import sqrt, exp, log
import array
from cStringIO import StringIO

fit_start = 80
fit_end = 300
fit_range = fit_start-fit_end

################### Bernstein functions
def BernsteinO2_raw(x, par):
    return par[0]*(1-x[0]/fit_end)**2+ 2*par[1]*(1-x[0]/fit_end)*(x[0]/fit_end) +  par[2]*(x[0]/fit_end)**2

BernsteinO2 = TF1("BernsteinO2", BernsteinO2_raw, fit_start, fit_end, 3)


def BernsteinO3_raw(x, par):

    return par[0]*(1-(x[0]/fit_end))**3 + par[1]*(3*(x[0]/fit_end)*(1-(x[0]/fit_end))**2) + par[2]*(3*(x[0]/fit_end)**2*(1-(x[0]/fit_end))) + par[3]*(x[0]/fit_end)**3

BernsteinO3 = TF1("BernsteinO3", BernsteinO3_raw, fit_start, fit_end, 4)


def BernsteinO4_raw(x, par):
    return par[0]*(1-(x[0]/fit_end))**4 + par[1]*(4*(x[0]/fit_end)*(1-(x[0]/fit_end))**3) + par[2]*(6*(x[0]/fit_end)**2*(1-(x[0]/fit_end))**2) + par[3]*(4*(x[0]/fit_end)**3*(1-(x[0]/fit_end))) + par[4]*(x[0]/fit_end)**4

BernsteinO4 = TF1("BernsteinO4", BernsteinO4_raw, fit_start, fit_end, 5)


def BernsteinO5_raw(x, par):
    return par[0]*(1-(x[0]/fit_end))**5 + par[1]*(5*(x[0]/fit_end)*(1-(x[0]/fit_end))**4) + par[2]*(10*(x[0]/fit_end)**2*(1-(x[0]/fit_end))**3) + par[3]*(10*(x[0]/fit_end)**3*(1-(x[0]/fit_end))**2) + par[4]*(5*(x[0]/fit_end)**4*(1-(x[0]/fit_end))) + par[5]*(x[0]/fit_end)**5

BernsteinO5 = TF1("BernsteinO5", BernsteinO5_raw, fit_start, fit_end, 6)



###################### Bernstein * exponentials
def ExpoBernsteinO2_raw(x, par):
    try:
        return exp(par[0]*x[0]/fit_end)* (par[1]*(1-x[0]/fit_end)**2+ 2*par[2]*(1-x[0]/fit_end)*(x[0]/fit_end) +  par[3]*(x[0]/fit_end)**2)
    except OverflowError:
        return -1

ExpoBernsteinO2 = TF1("ExpoBernsteinO2", ExpoBernsteinO2_raw, fit_start, fit_end, 4)


def ExpoBernsteinO3_raw(x, par):
    try:
        return exp(par[0]*x[0]/fit_end)* (par[1]*(1-(x[0]/fit_end))**3 + par[2]*(3*(x[0]/fit_end)*(1-(x[0]/fit_end))**2) + par[3]*(3*(x[0]/fit_end)**2*(1-(x[0]/fit_end))) + par[4]*(x[0]/fit_end)**3)
    except OverflowError:
        return -1

ExpoBernsteinO3 = TF1("ExpoBernsteinO3", ExpoBernsteinO3_raw, fit_start, fit_end, 5)


def ExpoBernsteinO4_raw(x, par):
    try:
        return exp(par[0]*x[0]/fit_end)* (par[1]*(1-(x[0]/fit_end))**4 + par[2]*(4*(x[0]/fit_end)*(1-(x[0]/fit_end))**3) + par[3]*(6*(x[0]/fit_end)**2*(1-(x[0]/fit_end))**2) + par[4]*(4*(x[0]/fit_end)**3*(1-(x[0]/fit_end))) + par[5]*(x[0]/fit_end)**4)
    except OverflowError:
        return -1

ExpoBernsteinO4 = TF1("ExpoBernsteinO4", ExpoBernsteinO4_raw, fit_start, fit_end, 6)


def ExpoBernsteinO5_raw(x, par):
    try:
        return exp(par[0]*x[0]/fit_end)* (par[1]*(1-(x[0]/fit_end))**5 + par[2]*(5*(x[0]/fit_end)*(1-(x[0]/fit_end))**4) + par[3]*(10*(x[0]/fit_end)**2*(1-(x[0]/fit_end))**3) + par[4]*(10*(x[0]/fit_end)**3*(1-(x[0]/fit_end))**2) + par[5]*(5*(x[0]/fit_end)**4*(1-(x[0]/fit_end))) + par[6]*(x[0]/fit_end)**5)
    except OverflowError:
        return -1

ExpoBernsteinO5 = TF1("ExpoBernsteinO5", ExpoBernsteinO5_raw, fit_start, fit_end, 7)


###################### Sun of Exponentials
def Expo_raw(x, par):
    try:
        return exp(par[0]+par[1]*x[0]/fit_end)
    except OverflowError:
        return -1

Expo = TF1("Expo", Expo_raw, fit_start, fit_end, 2)

def Expo2_raw(x, par):
    try:
        return (exp(par[0]+par[1]*x[0]/fit_end) + exp(par[2]+par[3]*x[0]/fit_end))
    except OverflowError:
        return -1

Expo2 = TF1("Expo2", Expo2_raw, fit_start, fit_end, 4)
