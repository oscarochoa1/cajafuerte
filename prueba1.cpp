
#include <fstream>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cmath>

using namespace std; 
using std::cout;
using std::endl;

void ecuacion(float y0, float wdel, int n, float t, float t1, float t2, float yn, float yn1, float yn2, float yn3, int posicion, int i, int step);

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
        int posicion;
  int step;
  int i;
  srand(time(0));
    
    ecuacion(y0,wdel,n, t, t1, t2, yn, yn1, yn2, yn3, posicion, i, step);
    
    return 0 ; 
}

void ecuacion(float y0, float wdel, int n,  float t, float t1, float t2, float yn, float yn1,  float yn2, float yn3, int posicion, int i, int step){
    
    yn =  y0 * pow(1 + wdel, -n) ;
    yn1 = yn - t*wdel*yn ;
    yn2 = yn - t1*wdel*yn ;
    yn3 = yn - t2*wdel*yn ;
    
    
    i = 0;
  while(posicion>0){
    step = rand()%3 -1;
    posicion = step;
      i++;

   
      cout << " resultado de yn ="<< yn << endl;
      cout <<" Las ecuaciones resueltas xon t = 0.1, 0.01, 1, son: " << endl ;
      cout  << yn1 << " el tiempo es : " << i << endl ;
      cout  << yn2 << endl ;
       cout << yn3 << endl ;
     
    
  }
}
