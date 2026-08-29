#include <iostream>
#include <cmath>

using namespace std;

bool tieneRaicesReales(float A, float B, float C) {

    float d;

    d = B * B - 4 * A * C;

    return d >= 0;
}

bool obtenerRaices(float A, float B, float C, float &raiz1, float &raiz2) {

    float d;

    if (!tieneRaicesReales(A, B, C)) {
        raiz1 = 0;
        raiz2 = 0;

        return false;
    }

    d = B * B - 4 * A * C;

    raiz1 = (-B + sqrt(d)) / (2 * A);
    raiz2 = (-B - sqrt(d)) / (2 * A);

    return true;
}

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

        cout << "Raiz 1: " << raiz1 << endl;
        cout << "Raiz 2: " << raiz2 << endl;

    }
    else {

        cout << "No tiene raices reales." << endl;
        cout << "Raiz 1: 0" << endl;
        cout << "Raiz 2: 0" << endl;
    }

    return 0;
}