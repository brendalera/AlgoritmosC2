#include <iostream>
#include "funciones.h"

using namespace std;

int main() {

    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (esPrimo(numero)) {
        cout << "Es primo." << endl;
    }
    else {
        cout << "No es primo." << endl;
    }

    return 0;
}