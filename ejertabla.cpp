#include <iostream>

using namespace std;
#define fil 4
#define colum 3
int main()
{
int tbla [fil][colum];
int suma_columna[colum];
for (int fila = 0; fila <fil; fila++ )
{
    for(int columna=0;columna < colum; columna++)
    {
        cout<<"introduce el valor de la fila "<<fila+1<<", columna "<<columna+1<<": ";
        cin>>tbla[fila][columna];
    }
}
for (int colunma=0; colunma<colum; colunma++)
{
    suma_columna[colunma]=0;
    for (int fila =0; fila<fil ; fila++)
    {
        suma_columna[colunma]+=tbla[fila][colunma];
    }
}
int mayorsuma=suma_columna[0];
for (int colunma=1; colunma<colum; colunma++)
{
    if(suma_columna[colunma]>mayorsuma)
    {
        mayorsuma=suma_columna[colunma];
    }
}
cout<<"la mayor suma de columnases ;" <<mayorsuma<<endl;
return 0;
}
