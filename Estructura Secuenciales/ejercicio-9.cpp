#include <iostream>
using namespace std;

int main() {
    int numero;
    int divisor;
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    cout << "Ingrese un divisor: ";
    cin >> divisor;
    
    if (divisor == 0) {
        cout << "Error: El divisor no puede ser cero." << endl;
    } else if (numero % divisor == 0) {
        cout << "El numero es divisible por " << divisor << endl;
    } else {
        cout << "El numero no es divisible por " << divisor << endl;
    }
    
    return 0;
}