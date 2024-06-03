#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char password[] = {'2', 'b', 'm', '3', '0', '\0'};
  char input_password[20];
  char name[50];
  char grupo[10];
  int remaining_attempts = 3;
  int precio;

  cout << "Hola, ¿cómo te llamas? ";
  cin.getline(name, 50); // Use getline to avoid buffer overflow

  cout << "Ingresa tu salon ";
  cin.getline(grupo, 10); // Use getline to avoid buffer overflow

  int i = 0;
  while (i < 3) {
    cout << "Ingresa tu contraseña (te quedan " << 3 - i << " intentos): ";
    cin.getline(input_password, 20); // Use getline to avoid buffer overflow

    if (strcmp(password, input_password) == 0) {
      cout << "¡Contraseña correcta, " << name << "! ¿Cuántas facturas tienes? ";
      int num_facturas;
      cin >> num_facturas;

      cout << "Ingrese el precio de la factura: ";
      cin >> precio;

      if (num_facturas > 0) {
        cout << "El número ingresado es positivo.\n";

        for (int k = 0; k < num_facturas; k++) {
          cout << "La factura número " << k + 1 << " tiene un valor de " << precio << endl;
        }
      } else {
        cout << "El número no es positivo.\n";
      }

      cout << "Bienvenido, " << name << endl;
      break;
    } else {
      cout << "Contraseña incorrecta. Prueba de nuevo.\n";
      i++;
    }
  }

  if (i == 3) {
    cout << "Demasiados intentos. Intenta más tarde.\n";
  }

  return 0;
}
