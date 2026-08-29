#include <iostream>
#include "funciones.h"

using namespace std;

int main() {

    float A, B, C;
    float raiz1, raiz2;

    cout << "Ingrese A: ";
    cin >> A;

    cout << "Ingrese B: ";
    cin >> B;

    cout << "Ingrese C: ";
    cin >> C;

    if (obtenerRaices(A, B, C, raiz1, raiz2)) {
        cout << "Tiene raices reales." << endl;

        cout << "Raiz 1: " << raiz1 << endl;
        cout << "Raiz 2: " << raiz2 << endl;
    }
    else {
        cout << "No tiene raices reales." << endl;
    }

    return 0;
}