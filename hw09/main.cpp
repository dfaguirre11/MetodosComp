/****************************************************************************************
Hw9 -Headers
 **************************************************************************************/
#include <iostream>
#include "funciones.h"
using namespace std;
int main(){
  double h0 = 8.5, v0 = 20; // condiciones iniciales
  double h = 0.001; // intervalo de tiempo
double t = 0.0;  
while(h0>=0.0){
  double* out  = RK(h0,v0,h); // pointer de la salida
  cout << t << " "<< h0 << " "<< v0 << endl;
  t += h;
  h0 = out[0];
  v0 = out[1];
}
  return 0;
}
