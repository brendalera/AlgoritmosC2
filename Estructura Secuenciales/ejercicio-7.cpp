#include <iostream>
using namespace std;

int main() {
    float numero1, numero2;
    
    cout << "Ingrese el primer numero real: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero real: ";
    cin >> numero2;
    
    if (numero1 > numero2)
        cout << "El numero " << numero1 << " es mayor." << endl;
    else if (numero1 < numero2)
        cout << "El numero " << numero2 << " es mayor." << endl;
    else
        cout << "Los numeros son iguales: " << numero1 << endl;
    
    return 0;
}