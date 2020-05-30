/**************************************************************************************
funcion de Runge-Kutta4
 **************************************************************************************/
// suma de dos arrays 
double* suma(double* a, double* b){
  double *c = new double[2];
  c[0] = a[0]+ b[0];
  c[1] = a[1] + b[1]; 
  return c;
}
// multiplicacion por una escalar de un array
double* escalar(double* a,double c){
  double* C = new double[2];
  C[0] = c*a[0];
  C[1] = c*a[1];
  return C;
}
/*
 x : posicion 
 u1 = x , u2 = x'
 la ecuacion diferencial es:
 u1' = u2
 u2' = -9.8
 */
// funcion para la ecuacion diferencial
double* F(double u2){
  double* A = new double[2];
  A[0] = u2;
  A[1] = -9.8;
  return A;
}
// implementacion Runge-Kutta4
double* RK(double u1_i,double u2_i, double h){
  double A[2] = {u1_i,u2_i};
  double *p = A;
  double* K1 = escalar(F(u2_i),h/6);
  double* K2 = escalar(F(u2_i + K1[0]/2 ),2*h/6);
  double* K3 = escalar(F(u2_i + K2[0]/2 ),2*h/6);
  double* K4 = escalar(F(u2_i + K3[0]),h/6);
  double* B = suma(p,suma(K1,suma(K2,suma(K3,K4))));
  return B;
}
