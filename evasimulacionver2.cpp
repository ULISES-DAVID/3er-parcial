#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 0, menor, mayor;
    
    cout<<("Ingresa los numeros: ");
    cin>>n;
    menor = mayor = n;
    sum += n;
    
    for (i = 1; i < 10; i++) {
        cin>>n;
        sum += n;
        

        if (n < menor) {
            menor = n;
        }
        
        if (n > mayor) {
            mayor = n;
        }
    }
    
    cout<<"La suma es: "<< sum <<endl;
    cout<<"Mayor: "<< mayor <<endl;
    cout<<"Menor: "<< menor <<endl;
    
    return 0;
}
