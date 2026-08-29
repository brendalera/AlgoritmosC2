#include <iostream>
using namespace std;

int main() {
    int inicio;

    cout << "Ingrese un número: ";
    cin >> inicio;

    for (int i = 0; i < 20; i++) {
        cout << inicio + i << endl;
    }

    return 0;
}
