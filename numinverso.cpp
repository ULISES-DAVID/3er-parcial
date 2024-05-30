#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int> numeros;
    int conta=0;
    cout<<"ingresa los numeros " << endl;
    while (conta<20)
    {
        int n;
        cin>>n;
        if (n==0)
        {break;}
        numeros.push_back(n);
        conta++;
    }
    cout <<"numeros al reves "<<endl;
    for(int i=numeros.size()-1;i >=0;i--)
    {
        cout<<numeros[i] << " ";
        
    }
    cout<< endl;
    return 0;
}