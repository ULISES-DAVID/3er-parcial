#include <iostream>
using namespace std;
int main()
{
    
    int x,y,z;
    cout<<"Ingrese el primer  numero: ";
    cin>>x;
    cout<<"Ingrese el segundo numero: ";
    cin>>y;
    cout<<"Ingrese el tercer numero: ";
    cin>>z;

    if (x==1 && y==2 && z==3)
    {
        cout<<"Acceso permitido";
    }
    else 
    {
        cout<<"Datos no validos"<<endl;

    }
    return 0;
}
