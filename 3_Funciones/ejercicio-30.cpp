#include <vector>
#include <iostream>
#include "funciones.h"
using namespace std;

// Calcular suma de vectores
vector<int> sumaDeVectores(vector<int> v1, vector<int> v2)
{

  // Vector resultado
  vector<int> resultado;

  // Obtengo el tamaño mayor
  int masLargo = mayor(v1.size(), v2.size());

  for (int i = 0; i < masLargo; i++)
  {
    // En caso de que sean de igual tamaño
    if (i < v1.size() && i < v2.size())
    {
      resultado.push_back(v1[i] + v2[i]);
    }
    else if (i < v1.size())
    {
      resultado.push_back(v1[i]);
    }
    else
    {
      resultado.push_back(v2[i]);
    }
  }

  return resultado;
}

int productoEscalar(vector <int> v1, vector<int> v2){
  int resultado= 0;
  for(int i = 0; i < v1.size(); i++){
    resultado += v1[i] * v2[i];
  }

  return resultado;
}


//--------------------------- Pruebas
/*
  A = {1,2,3,4,5}; B = {1,2,3,4,5};
  A + B = {2,4,6,8,10}
*/
vector<int> A = {1, 2, 3, 4, 5};
vector<int> B = {1, 2, 3, 4, 5};
vector<int> resultado1 = sumaDeVectores(A, B);

/*
  A = {1,2,3,4,5,6}; B = {1,2,3,4,5};
  A + B = {2,4,6,8,10,6}
*/
vector<int> C = {1, 2, 3, 4, 5, 6};
vector<int> D = {1, 2, 3, 4, 5};
vector<int> resultado2 = sumaDeVectores(C, D);
/*
  E = {1,2,3,4}; F = {1,2,3,4,5};
  E + F = {2,4,6,8,5}
*/
vector<int> E = {1,2,3,4};
vector<int> F = {1, 2, 3, 4, 5};
vector<int> resultado3 = sumaDeVectores(E, F);

int main()
{
  cout << "Resultado de suma de igual tamanio \n";
  for (int i = 0; i < resultado1.size(); i++)
  {
    cout << resultado1[i] << " ";
  }
  cout << "\n";

  cout << "Resultado de suma con tamanio de C mayor a D\n";
  for (int i = 0; i < resultado3.size(); i++)
  {
    cout << resultado3[i] << " ";
  }

  cout << "Resultado de producto escalar de A . B\n";
  int resultado4 = productoEscalar(A,B);
  cout << resultado4;
  return 0;
}
