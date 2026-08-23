#include <iostream>
using namespace std;

int main() {
    int numero;
    
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    for (int i = 1; i <= 20; i++) {
        numero = numero + 1;
        cout << numero << endl;
    }

    return 0;
}