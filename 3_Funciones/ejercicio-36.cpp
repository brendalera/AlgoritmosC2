#include <vector>
#include <iostream>
#include "funciones.h"
using namespace std;

vector<int> sumarFilas(vector<vector<int>> v, int m, int n)
{
  vector<int> resultado;
  for (int i = 0; i < n; i++)
  {
    int sum = 0;
    for (int j = 0; j < m; j++)
    {
      sum += v[i][j];
    }
    resultado.push_back(sum);
  }
  return resultado;
}

int main()
{
  vector<vector<int>> m1 = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}};

  int n = 3; // filas
  int m = 3; // columnas

  vector<int> resultado = sumarFilas(m1, m, n);

  for (int i = 0; i < resultado.size(); i++)
  {
    cout << "Fila " << i << ": " << resultado[i] << endl;
  }

  return 0;
}