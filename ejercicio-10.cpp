/*
##################################################
############# Calculadora ########################
##################################################
*/

#include <iostream> //Libreria para los prints y para entrada

// Esta línea es necesaria para que funcione el cout
using namespace std;

// Funcion para saber si una operacion es correcta
bool isOpCorrect(char op)
{
  return op == '+' || op == '-' || op == '*' || op == '/';
}
// Por convención el main tiene como retorno un numero
int main()
{
  // Inicializo
  int num1, num2, resultado;
  bool zero=false;
  char op;

  cout << "Ingrese un numero: "; cin >> num1;
  cout << "Ingrese otro numero: "; cin >> num2;
  cout << "Ingrese operacion a realizar(+,-,*,/): "; cin >> op;

  switch (op)
  {
  case '+':
    resultado = num1 + num2;
    break;
  case '-':
    resultado = num1 - num2;
    break;
  case '*':
    resultado = num1 * num2;
    break;
  case '/':
    if (num2 != 0)
    {
      resultado = num1 / num2;
    }
    else
    {
      zero = !zero;
      cout << "No se puede dividir entre 0" << endl;
    }
    break;
  default:
    cout << "Opcion incorrecta" << endl;
    break;
  }

  if (isOpCorrect(op) && !zero)
  {
    cout << num1 << op << num2 << " = " << resultado << endl;
  }
  // Retorno
  return 0;
}
