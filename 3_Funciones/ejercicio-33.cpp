#include <vector>
#include <iostream>
#include "funciones.h"
using namespace std;

bool existeEnElVector(int n, vector<int> v)
{
  bool existe;
  for (int i = 0; i < v.size(); i++)
  {
    if (n == v[i])
    {
      return true;
    }
  }
  return existe;
}

vector<int> ordenarVector(vector<int> v)
{
  vector<int> resultado;

  while (v.size() > 0)
  {
    int min = v[0];
    int posicionMin = 0;

    for (int j = 1; j < v.size(); j++)
    {
      if (v[j] < min)
      {
        min = v[j];
        posicionMin = j;
      }
    }

    resultado.push_back(min);
    v.erase(v.begin() + posicionMin);
  }

  return resultado;
}

vector<int> interseccion(vector<int> v1, vector<int> v2)
{
  vector<int> resultado;
  for (int i = 0; i < v1.size(); i++)
  {
    if (existeEnElVector(v1[i], v2))
    {
      resultado.push_back(v1[i]);
    }
  }
  return resultado;
}

vector<int> unionVectores(vector<int> v1, vector<int> v2)
{
  vector<int> resultado = v1;

  for (int i = 0; i < v2.size(); i++)
  {
    if (!existeEnElVector(v2[i], resultado))
    {
      resultado.push_back(v2[i]);
    }
  }

  return resultado;
}

/*

*/
vector<int> v = {3, 1, 4, 67, -2, 3, -4};
vector<int> v2 = {3, 1, 4, -2, 3, -4};
int main()
{
  vector<int> resultado = interseccion(v, v2);
  for (int i = 0; i < resultado.size(); i++)
  {
    cout << resultado[i];
  }
}