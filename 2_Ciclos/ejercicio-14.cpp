#include <iostream>
using namespace std;

int main() {
    int numero;
    int factorial = 1;

    cout << "Ingrese un número: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++) {
        factorial = factorial * i;
    }

    cout << "El factorial es: " << factorial << endl;

    return 0;
}
