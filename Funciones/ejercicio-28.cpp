#include <iostream>
#include "funciones.h"

using namespace std;

int main() {

    int A, B;

    cout << "Ingrese A: ";
    cin >> A;

    cout << "Ingrese B: ";
    cin >> B;

    cout << "MCD: " << calcularMCD(A, B) << endl;
    cout << "MCM: " << calcularMCM(A, B) << endl;

    return 0;
}