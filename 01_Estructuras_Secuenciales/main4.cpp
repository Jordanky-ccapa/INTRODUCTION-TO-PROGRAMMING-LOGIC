#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double suma, numero1, numero2;

    cout<<"SUMA DE NUMEROS";
    cout<<"\nINGRESE EL PRIMER NUMERO: ";
    cin>>numero1;

    cout<<"INGRESE EL SEGUNDO NUMERO: ";
    cin>>numero2;

    suma = numero1 + numero2;
    cout<<fixed<<setprecision(2);

    cout<<"LA SUMA DE LOS DOS NUMEROS ES:";
    cout<<suma;

    return 0;
}