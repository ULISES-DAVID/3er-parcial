#include <iostream>
using namespace std;
int main()
{
    int x, sum = 0, mayor, menor;

    cout<<"Ingresa los numeros: ";
    cin>>x;
    mayor = menor = x;
    sum += x;

    int cont = 1;

    do {
        cin>>x;
        sum += x;


        if (x < menor) {
            menor = x;
        }

        if (x > mayor) {
            mayor = x;
        }

        cont++;
    } while (cont < 10);

    cout<<"Suma: " <<sum;
    cout<<"\n";
    cout<<"El numero mayor es: " <<mayor <<endl;
    cout<<"El numero menor es: " <<menor;

    return 0;
}
