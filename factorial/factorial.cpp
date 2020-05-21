/***************************************************************
Tarea laboratorio metodos computacionales
Hw08 Funciones en C++
 ***************************************************************/
#include <iostream>
using namespace std;

int factorial(int i);
int main(){
  int n;
  cout << "ingrece el número al que le quiere calcular el factorial"<< endl;
  cin >> n;
  int f = factorial(n);
  cout << "n! = "<< f << endl;
  return 0;
}

 int factorial(int i){
  if(i==0){
    return 1;
  }
  else{
    int b = i-1;
    return i*factorial(b);
  }
		      }
