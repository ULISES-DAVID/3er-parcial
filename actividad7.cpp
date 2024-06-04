#include <iostream>
using namespace std;

int main() {
    int lado, lado2, altura;
    float operacion;
    int figura;

    cout << "Que area de figura desea calcular" << endl;
    cout << "1. Triangulo" << endl;
    cout << "2. Trapecio" << endl;
    cout << "3. Rectangulo" << endl;

    cin >> figura;
    switch(figura) {
        case 1:
            cout << "Ingresa cuanto mide el lado del triangulo: ";
            cin >> lado;
            operacion = (lado * lado / 2.0);
            cout << "El area de la figura es " << operacion << endl;
            break;
        case 2:
            cout << "Ingresa la base mayor del trapecio: ";
            cin >> lado;
            cout << "Ingresa la base menor del trapecio: ";
            cin >> lado2;
            cout << "Ingresa la altura del trapecio: ";
            cin >> altura;
            operacion = ((lado + lado2) / 2.0 * altura);
            cout << "El resultado es " << operacion << endl;
            break;
        case 3:
            cout << "Ingresa la base del rectangulo: ";
            cin >> lado;
            cout << "Ingresa la altura del rectangulo: ";
            cin >> lado2;
            operacion = (lado * lado2);
            cout << "El area del rectangulo es " << operacion << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
    }

    return 0;
}
