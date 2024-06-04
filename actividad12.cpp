#include <iostream>

using namespace std;

int main() {
  int N1, N2, N3, N4, N5;

  cout << "Introduzca 5 numeros:\n";
  cin >> N1 >> N2 >> N3 >> N4 >> N5;

  int largest = N1; 

  if (N2 > largest) {
    largest = N2;
  }
  if (N3 > largest) {
    largest = N3;
  }
  if (N4 > largest) {
    largest = N4;
  }
  if (N5 > largest) {
    largest = N5;
  }

  cout << largest << " es el numero mayor" << endl;

  return 0;
}
