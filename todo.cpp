#include <fstream>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cmath>

using namespace std; 
using std::cout;
using std::endl;

void ecuacion(float y0, float wdel, int n, float t, float t1, float t2, float yn, float yn1, float yn2, float yn3, float yn11, float yn21, float yn31, int posicion, int i, int step);

int main(){
    float y0 = 1 ;
    float wdel = 58;
    int n = 4;
    float yn ;
    float yn1 ;
    float yn2 ;
    float yn3 ;
    float yn11 ;
    float yn21 ;
    float yn31 ;
    float t = 0.1;
    float t1 = 0.01;
    float t2 = 1;
    int posicion;
  int step;
  int i;
  srand(time(0));
    
    ecuacion(y0,wdel,n, t, t1, t2, yn, yn1, yn2, yn3, yn11, yn21, yn31, posicion, i, step);
   
  
  
    
    return 0 ; 
}


void ecuacion(float y0, float wdel, int n,  float t, float t1, float t2, float yn, float yn1,  float yn2, float yn3,float yn11,  float yn21, float yn31, int posicion, int i, int step){
    
    yn =  y0 * pow(1 + wdel, -n) ;
    yn1 = yn - t*wdel*yn ;
    yn2 = yn - t1*wdel*yn ;
    yn3 = yn - t2*wdel*yn ;
    yn11 = yn - t*wdel*yn11 ;
    yn21 = yn - t1*wdel*yn21 ;
    yn31 = yn - t2*wdel*yn31 ;
    
    i = 0;
  while(posicion>0){
    step = rand()%3 -1;
    posicion = step;
    cout << i << " "<< posicion ;
    i++;
    
    cout << yn << " Las ecuaciones resueltas son: " << " primera con t=0.1 : " << yn1 << ", segunda con t=0.01 :" << yn2 << ", tercera con t=1 : " << yn3 << ", Seguido sería: " << ", La primera con t=0.1 : "<< yn11 << ", La segunda con t=0.01 : " << yn21 << ", La tercera con t=1 : " << yn31 << ", tiempo es: " << i << endl ;
}
}
