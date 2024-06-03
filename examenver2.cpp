#include <iostream>
#include <cstring> 

using namespace std;

int main() {
  char password[] = {'2', 'b', 'm', '3', '0', '\0'};
  char input_password[20];
  char name[50];
  char grupo[10];
  int remaining_attempts = 3;

  cout << "Hola, ¿cómo te llamas? ";
  cin.getline(name, 50); 

  cout << "Ingresa tu salon ";
  cin.getline(grupo, 10); 

  int i = 0;
  while (i < 3) {
    cout << "Ingresa tu contraseña (te quedan " << 3 - i << " intentos): ";
    cin.getline(input_password, 20); 

    if (strcmp(password, input_password) == 0) {
      cout << "¡Contraseña correcta, " << name << "! ¿Cuántas facturas tienes? ";
      int num_facturas;
      cin >> num_facturas;

      cout << "Bienvenido, " << name << ". Tienes " << num_facturas << " facturas.\n";
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
