#include <iostream>
using namespace std;

int main() {
    int N;
    float numero;
    float sumaLote;
    float sumaTotal = 0;
    int cantidadLote;
    int cantidadTotal = 0;

    cout << "Ingrese la cantidad de lotes: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {

        sumaLote = 0;
        cantidadLote = 0;

        cout << "\nLote " << i << endl;
        cout << "Ingrese numeros (0 para terminar): ";
        cin >> numero;

        while (numero != 0) {
            sumaLote = sumaLote + numero;
            cantidadLote;

            cin >> numero;
        }

        if (cantidadLote > 0) {
            cout << "Media del lote: "
                 << sumaLote / cantidadLote << endl;
        }

        sumaTotal = sumaTotal + sumaLote;
        cantidadTotal = cantidadTotal + cantidadLote;
    }

    if (cantidadTotal > 0) {
        cout << "\nMedia total: "
             << sumaTotal / cantidadTotal << endl;
    }

    return 0;
}
