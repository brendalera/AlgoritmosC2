#include <iostream>
using namespace std;

int main() {
    int A, B;
    int C = 0;

    cout << "Ingrese A: ";
    cin >> A;

    cout << "Ingrese B: ";
    cin >> B;

    for (int i = 1; i <= B; i++) {
        C = C + A;
    }

    cout << "Resultado: " << C << endl;

    return 0;
}