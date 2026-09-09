#include <iostream>

using namespace std;

int main() {

    float anterior, actual;
    bool ascendente = true;
    bool descendente = true;
    char respuesta;

    cout << "Ingrese un numero: ";
    cin >> anterior;

    cout << "Hay mas numeros? (s/n): ";
    cin >> respuesta;

    while (respuesta == 's') {

        cout << "Ingrese un numero: ";
        cin >> actual;

        if (actual < anterior) {
            ascendente = false;
        }

        if (actual > anterior) {
            descendente = false;
        }

        anterior = actual;

        cout << "Hay mas numeros? (s/n): ";
        cin >> respuesta;
    }

    if (ascendente) {
        cout << "La serie esta ordenada en forma ascendente." << endl;
    }
    else if (descendente) {
        cout << "La serie esta ordenada en forma descendente." << endl;
    }
    else {
        cout << "La serie no esta ordenada." << endl;
    }

    return 0;
}