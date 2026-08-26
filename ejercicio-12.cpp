#include <iostream>

using namespace std;
int main(){
  int segundos, horas, minutos, dias;
  cout << "Ingresa una cantidad de segundos: "; cin >> segundos;

  minutos = segundos / 60;
  horas = minutos / 60;
  dias = horas / 24;

  cout << "En segundos: " << segundos << "\n";
  cout << "En minutos: " << minutos << "\n";
  cout << "En horas: " << horas << "\n";
  cout << "En dias: " << dias << "\n";
  return 0;
}