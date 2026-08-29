#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <vector>
#include <cmath>

using namespace std;

// EJERCICIO 24
bool tieneRaicesReales(float A, float B, float C) {
    
    float discriminante;

    discriminante = B * B - 4 * A * C;

    return discriminante >= 0;
}


// EJERCICIO 25
bool obtenerRaices(float A, float B, float C, float &raiz1, float &raiz2) {

    float discriminante;

    if (!tieneRaicesReales(A, B, C)) {
        raiz1 = 0;
        raiz2 = 0;

        return false;
    }

    discriminante = B * B - 4 * A * C;

    raiz1 = (-B + sqrt(discriminante)) / (2 * A);
    raiz2 = (-B - sqrt(discriminante)) / (2 * A);

    return true;
}

// EJERCICIO 27
bool esPrimo(int numero) {

    if (numero < 2) {
        return false;
    }

    for (int i = 2; i < numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

// EJERCICIO 28
int calcularMCD(int A, int B) {

    while (B != 0) {
        int resto = A % B;

        A = B;
        B = resto;
    }

    return A;
}

int calcularMCM(int A, int B) {

    return (A * B) / calcularMCD(A, B);
}

// EJERCICIO 29
vector<int> numerosPrimos() {

    vector<int> primos;

    for (int i = 2; i <= 200; i++) {

        if (esPrimo(i)) {
            primos.push_back(i);
        }
    }

    return primos;
}

#endif