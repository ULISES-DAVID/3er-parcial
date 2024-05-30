#include <iostream>

using namespace std;

int main() {
  double num1, num2;
  char operacion;

  cout << "Ingrese el primer número: ";
  cin >> num1;

  cout << "Ingrese el operador (+, -, *, /): ";
  cin >> operacion;

  cout << "Ingrese el segundo número: ";
  cin >> num2;

  switch (operacion) {
    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
      break;
    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
      break;
    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
      break;
    case '/':
      if (num2 == 0) {
        cout << "Error: División por cero." << endl;
      } else {
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
      }
      break;
    default:
      cout << "Operador no válido." << endl;
  }

  return 0;
}
