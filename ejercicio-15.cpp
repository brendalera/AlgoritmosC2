#include <iostream>
using namespace std;

int main() {
    float numero;
    float suma = 0;

    cout << "Ingrese numeros reales (ingrese 0 para terminar):" << endl;

    cin >> numero;

    while (numero != 0) {
        suma += numero;
        cout << "Numero ingresado: " << numero << " | Suma parcial: " << suma << endl;
        cin >> numero;
    }

    cout << "\nSuma total: " << suma << endl;

    return 0;
}