#include <vector>
#include <iostream>
#include "funciones.h"
using namespace std;

int sumarDiagonalPrincipal(vector<vector<int>> matriz,int m){
  /*
    Precondicion: matriz debe ser MxM
  */
  int suma=0;
  for(int i = 0; i<m;i++){
    suma += matriz[i][i];
  }

  return suma;
}

int main(){
  vector<vector<int>> m1 = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  int m = 3; // matriz cuadrada m x m

  int resultado = sumarDiagonalPrincipal(m1, m);

  cout << "Suma de la diagonal principal: " << resultado << endl;

  return 0;
}
