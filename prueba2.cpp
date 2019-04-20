#include <fstream>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cmath>

using namespace std; 

void ecuacion(float y0, float wdel, int n, float t, float t1, float t2, float yn, float yn1, float yn2, float yn3);

int main(){
    float y0 = 1 ;
    float wdel = 58;
    int n = 4;
    float yn ;
    float yn1 ;
    float yn2 ;
    float yn3 ;
    float t = 0.1;
    float t1 = 0.01;
    float t2 = 1;
    
    ecuacion(y0,wdel,n, t, t1, t2, yn, yn1, yn2, yn3);
    
    return 0 ; 
}

void ecuacion(float y0, float wdel, int n,  float t, float t1, float t2, float yn, float yn1,  float yn2, float yn3){
    
    yn =  y0 * pow(1 + wdel, -n) ;
    yn1 = yn - t*wdel*yn1 ;
    yn2 = yn - t1*wdel*yn2 ;
    yn3 = yn - t2*wdel*yn3 ;
    
    cout << yn << " " << yn1 << " " << yn2 << " " << yn3 << endl ;
}
