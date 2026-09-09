#include <vector>
#include <iostream>
#include "funciones.h"
#include <cmath> // Necesaria para usar pow()
using namespace std;

int calcularEspecializacion(vector<int> v, int num){
  int especializacion = 0;
  for(int i=0; i<v.size();i++){
    especializacion += v[i] * pow(num,i);
  }
  return especializacion;
}

int main(){

  vector <int> prueba = {1,2,3};
  int numUsuario;

  cout<<"Ingrese un numero: "; cin>> numUsuario;
  
  int resultado = calcularEspecializacion(prueba,numUsuario);

  cout << resultado;
  return 0;
}

