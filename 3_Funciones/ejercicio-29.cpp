#include <iostream>
#include <vector>
#include "funciones.h"

using namespace std;

int main(){
    
    vector<int> primos;

    primos = numerosPrimos();

    cout << "Numeros primos entre 2 y 200:" << endl;

    for (int i = 0; i < primos.size(); i++) {
        cout << primos[i] << " ";
    }

    return 0;
}