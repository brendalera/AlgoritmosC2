#include <vector>
#include <iostream>
#include "funciones.h"
using namespace std;

struct Alumno{
  int nota;
  int numExp;
};

int calcularPromedio(vector <int> v){
  int suma= 0;
  for(int i=0; i<v.size(); i++){
    suma += v[i];
  }

  return suma/v.size();
}

vector <Alumno> ingles;

int main(){
  int opcion = 1;
  while(opcion != 0){

    //Defino los datos
    int nota;
    int numExp;

    //Ingreso datos
    cout << "Ingrese los datos del alumno\n";
    cout << "Nota: "; cin >> nota; cout << "\n";
    cout << "Numero de expediente: "; cin >> numExp; cout << "\n";

    //Agrego al vector
    ingles.push_back({nota,numExp});

    //Pregunto si quiere seguir cargando
    cout << "¿Desea seguir cargando?\n";
    cout << "1_ si\n";
    cout << "0_ si\n";
    cout << "0_ si\n";cin >> opcion;

  }

  //Muestro los datos
  cout << "La cantidad de alumnos que rindieron son: "; cout <<ingles.size(); cout << "\n";
  vector<int> notas;
  for(int i=0; i<ingles.size();i++){
    notas.push_back(ingles[i].nota);
  }

  int promedio = calcularPromedio(notas);
  cout << "El promedio de notas son "; cout << promedio;

  return 0;
}