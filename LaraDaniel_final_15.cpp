#include <iostream>
#include <fstream>
#include <stdio.h>  
#include <cmath>
#include <math.h>  

using namespace std;

float rungeKutta(float x0, float y0, float x, float h); 

int main(){
    float m = 7294.29;
    int q = 2;
    int t, i;
    float h = 0.1;
    float F[10];
    float x0 = 1.0;
    float y0 = 0.0;
    float t0 = 0.0;
    t = 10;
    int T[10];
    ofstream outfile;
    
    for(i=0;i<=3;i++){
    F[i] = 0;
    }
    for(i=4;i<=7;i++){
    F[i] = q*3;
    }
    for(i=8;i<=10;i++){
    F[i] = 0;
    }  
    outfile.open("rungekutta.dat");
    float k1, k2, k3, k4;
    float y[10];
    float x[10];
    for (int i = 0; i<t; i++)
        { 
        y[0] = y0;
        x[0] = x0;
        k1 = h*F[i]; 
        k2 = h*f(t0 + 0.5*h, y[i] + 0.5*k1); 
        k3 = h*f(t0 + 0.5*h, y[i] + 0.5*k2); 
        k4 = h*f(t0 + h, y[i] + k3); 
        y[i+1] = y[i] + (1.0/6.0)*(k1 + 2*k2 + 2*k3 + k4);
        k1 = h*f(t0, x); 
        k2 = h*f(t0 + 0.5*h, x[i] + 0.5*k1); 
        k3 = h*f(t0 + 0.5*h, x[i] + 0.5*k2); 
        k4 = h*f(t0 + h, x[i] + k3); 
        x[i+1] = x[i] + (1.0/6.0)*(k1 + 2*k2 + 2*k3 + k4);
        t0 = t0 + h; 
        cout << T[i] << " " << x[i] << " " << y[i] << " ";
    } 
    outfile.close();
    return 0;
}
