#include <iostream>
using namespace std;

int main() {
    float num;
    float maximo, minimo;
    int posMax, posMin;
    int pos = 1;
    char respuesta;

    cout << "Ingrese un numero: ";
    cin >> num;

    maximo = num;
    minimo = num;
    posMax = pos;
    posMin = pos;

    cout << "Hay mas numeros? (s/n): ";
    cin >> respuesta;

    while (respuesta == 's') {
        pos++;

        cout << "Ingrese un numero: ";
        cin >> num;

        if (num > maximo) {
            maximo = num;
            posMax = pos;
        }

        if (num < minimo) {
            minimo = num;
            posMin = pos;
        }

        cout << "Hay mas numeros? (s/n): ";
        cin >> respuesta;
    }

    cout << "Maximo: " << maximo << endl;
    cout << "Minimo: " << minimo << endl;
    cout << "Posicion numero maximo: " << posMax << endl;
    cout << "Posicion numero minimo: " << posMin << endl;

    return 0;
}