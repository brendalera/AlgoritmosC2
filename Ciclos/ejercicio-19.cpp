#include <iostream>

using namespace std;

int main() {

    int num;
    int mayor1, mayor2, mayor3;

    cout << "Ingrese un numero: ";
    cin >> num;

    mayor1 = num;
    mayor2 = num;
    mayor3 = num;

    while (num != 0) {

        if (num > mayor1) {
            mayor3 = mayor2;
            mayor2 = mayor1;
            mayor1 = num;
        }
        else if (num > mayor2) {
            mayor3 = mayor2;
            mayor2 = num;
        }
        else if (num > mayor3) {
            mayor3 = num;
        }

        cout << "Ingrese un numero: ";
        cin >> num;
    }

    cout << "Los tres mayores son: " << endl;
    cout << mayor1 << endl;
    cout << mayor2 << endl;
    cout << mayor3 << endl;

    return 0;
}