import numpy as np
import math
import matplotlib.pyplot as plt
import time

mu,sig,N = 0,1,10000

def f(x):
    return e**x;

def metropolis(N):
    x = (4,10,12,80,50,40)
    y = (100,5,80,50,50,200)
    r = np.zeros(1)
    p = f(r[0])
    pts = []
    for i in range(N):
        pro = r + np.random.uniform(-1,1)
        inicial = f(pro[0])
        