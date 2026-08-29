#include <iostream>

using namespace std;

bool tieneRaicesReales(float A, float B, float C) {

    float d;

    d = B * B - 4 * A * C;

    if (d >= 0) {
        return true;
    }
    else {
        return false;
    }
}

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