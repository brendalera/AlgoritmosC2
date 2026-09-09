#include <vector>
#include <iostream>
#include "funciones.h"
using namespace std;

bool esMatrizIdentidad(vector<vector<int>> matriz, int m)
{
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (i == j && matriz[i][j] != 1)
        return false;
      if (i != j && matriz[i][j] != 0)
        return false;
    }
  }
  return true;
}

int main(){
  vector<vector<int>> identidad = {
    {1, 0, 0},
    {0, 1, 0},
    {0, 0, 1}
  };

  vector<vector<int>> noIdentidad = {
    {1, 0, 0},
    {0, 5, 0},
    {0, 0, 1}
  };

  cout << "¿Es identidad? " << (esMatrizIdentidad(identidad, 3) ? "Si" : "No") << endl;
  cout << "¿Es identidad? " << (esMatrizIdentidad(noIdentidad, 3) ? "Si" : "No") << endl;

  return 0;
}