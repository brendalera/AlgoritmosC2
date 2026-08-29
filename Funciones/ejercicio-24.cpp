#include <iostream>
#include "funciones.h"

using namespace std;

int main() {

    float A, B, C;

    cout << "Ingrese A: ";
    cin >> A;

    cout << "Ingrese B: ";
    cin >> B;

    cout << "Ingrese C: ";
    cin >> C;

    if (tieneRaicesReales(A, B, C)) {
        cout << "Tiene raices reales." << endl;
    }
    else {
        cout << "No tiene raices reales." << endl;
    }

    return 0;
}