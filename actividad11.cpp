#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    cout << "Ingrese los tres numeros de un digito" << endl;
    cin >> n1 >> n2 >> n3;

    if (n1 == 1 || n2 == 1 || n3 == 1) {
        if (n1 == 2 || n2 == 2 || n3 == 2) {
            if (n1 == 3 || n2 == 3 || n3 == 3) {
                cout << "Acceso permitido" << endl;
            } else {
                cout << "Acceso denegado" << endl;
            }
        } else {
            cout << "Acceso denegado" << endl;
        }
    } else {
        cout << "Acceso denegado" << endl;
    }

    return 0;
}
