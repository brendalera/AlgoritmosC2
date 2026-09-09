#include <iostream>
#include <vector>
using namespace std;

vector<int> minimosPorFila(vector<vector<int>> matriz, int m, int n){
  vector<int> resultado;
  for(int i = 0; i < n; i++){
    int minimo = matriz[i][0];
    for(int j = 1; j < m; j++){
      if(matriz[i][j] < minimo){
        minimo = matriz[i][j];
      }
    }
    resultado.push_back(minimo);
  }
  return resultado;
}

int main(){
  vector<vector<int>> m1 = {
    {5, 2, 8},
    {1, 9, 3},
    {7, 6, 4}
  };

  int n = 3; // filas
  int m = 3; // columnas

  vector<int> resultado = minimosPorFila(m1, m, n);

  for(int i = 0; i < resultado.size(); i++){
    cout << "Minimo fila " << i << ": " << resultado[i] << endl;
  }

  return 0;
}
