#include <iostream>
#include <string>

using namespace std;

int main() {

    string nombre;
    string personaMax, personaMin;

    float salario;
    float salarioMax, salarioMin;

    char respuesta;

    cout << "Ingrese el nombre: ";
    cin >> nombre;

    cout << "Ingrese el salario: ";
    cin >> salario;

    salarioMax = salario;
    salarioMin = salario;

    personaMax = nombre;
    personaMin = nombre;

    cout << "Hay mas personas? (s/n): ";
    cin >> respuesta;

    while (respuesta == 's') {

        cout << "Ingrese el nombre: ";
        cin >> nombre;

        cout << "Ingrese el salario: ";
        cin >> salario;

        if (salario > salarioMax) {
            salarioMax = salario;
            personaMax = nombre;
        }

        if (salario < salarioMin) {
            salarioMin = salario;
            personaMin = nombre;
        }

        cout << "Hay mas personas? (s/n): ";
        cin >> respuesta;
    }

    cout << endl;
    cout << "Salario maximo: " << salarioMax << endl;
    cout << "Persona: " << personaMax << endl;

    cout << "Salario minimo: " << salarioMin << endl;
    cout << "Persona: " << personaMin << endl;

    return 0;
}