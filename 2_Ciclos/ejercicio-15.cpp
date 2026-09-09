#include <iostream>
using namespace std;

int main() {
    float numero;
    float suma = 0;

    cout << "Ingrese un numero (0 para terminar): ";
    cin >> numero;

    while (numero != 0) {
        suma = suma + numero;

        cout << "Numero: " << numero << endl;
        cout << "Suma parcial: " << suma << endl;

        cout << "Ingrese otro numero (0 para terminar): ";
        cin >> numero;
    }

    return 0;
}
