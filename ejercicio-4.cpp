#include <iostream>
using namespace std;

int main() {
	float radio;
	float superficie;
	float volumen;

	cout << "Ingrese el radio: ";
	cin >> radio;

	superficie = 4 * 3.1416 * radio * radio;
	volumen = (4 * 3.1416 * radio * radio * radio) / 3;

	cout << "Superficie = " << superficie << endl;
	cout << "Volumen = " << volumen << endl;
	return 0;
} 
