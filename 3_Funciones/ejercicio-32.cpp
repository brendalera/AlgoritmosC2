#include <vector>
#include <iostream>
#include "funciones.h"
using namespace std;

bool existeEnElVector(int n, vector<int>v){
  for(int i = 0; i<v.size(); i++){
    if(n == v[i]){
      return true;
    }
  }
  return false;
}
vector<int> sinRepetidos(vector<int> v){
  vector<int> vectorSinRepetidos={};
  for(int i=0; i<v.size();i++){
    if(!existeEnElVector(v[i], vectorSinRepetidos)){
      vectorSinRepetidos.push_back(v[i]);
    }
  }
  return vectorSinRepetidos;
}

int main(){
  vector<int> vect = {1,-1,1,-1,1,2,-2,-4};
  vector<int> vectResultado = sinRepetidos(vect);

  for(int i=0; i<vectResultado.size();i++){
    cout << vectResultado[i]; cout << ", ";
  }
  return 0;
}