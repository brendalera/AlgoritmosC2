#include <iostream>
using namespace std;

int main() {
    int N;
    int num;
    int mayor, menor;
    int vecesMayor = 0;
    int vecesMenor = 0;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> N;

    cout << "Ingrese un numero: ";
    cin >> num;

    mayor = num;
    menor = num;

    vecesMayor = 1;
    vecesMenor = 1;

    for (int i = 2; i <= N; i++) {

        cout << "Ingrese un numero: ";
        cin >> num;

        if (num > mayor) {
            mayor = num;
            vecesMayor = 1;
        }
        else if (num == mayor) {
            vecesMayor++;
        }

        if (num < menor) {
            menor = num;
            vecesMenor = 1;
        }
        else if (num == menor) {
            vecesMenor++;
        }
    }

    cout << "Mayor: " << mayor << endl;
    cout << "Aparece: " << vecesMayor << " veces" << endl;

    cout << "Menor: " << menor << endl;
    cout << "Aparece: " << vecesMenor << " veces" << endl;

    return 0;
}