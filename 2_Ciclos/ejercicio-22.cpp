#include <iostream>
using namespace std;

int main() {
    float Celsius, Fahrenheit;

    cout << "Fahrenheit\tCelsius" << endl;

    for (Fahrenheit = 0; Fahrenheit <= 200; Fahrenheit = Fahrenheit + 10) {
        Celsius = 5.0 / 9.0 * (Fahrenheit - 32);
        cout << Fahrenheit << "\t\t" << Celsius << endl;
    }

    return 0;
}
