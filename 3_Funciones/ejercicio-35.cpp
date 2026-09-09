#include <vector>
#include <iostream>
#include "funciones.h"
using namespace std;

vector<vector<int>> sumarMatrices(vector<vector<int>> m1, vector<vector<int>> m2, int m, int n)
{
  vector<vector<int>> resultado(n, vector<int>(m, 0));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      resultado[i][j] = m2[i][j] + m1[i][j];
    }
  }
  return resultado;
}

int main()
{
  vector<vector<int>> m1 = {
      {1, 2, 3},
      {4, 5, 6}};

  vector<vector<int>> m2 = {
      {10, 20, 30},
      {40, 50, 60}};

  int n = 2; // filas
  int m = 3; // columnas

  vector<vector<int>> resultado = sumarMatrices(m1, m2, m, n);

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << resultado[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
