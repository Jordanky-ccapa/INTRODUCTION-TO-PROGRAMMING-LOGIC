#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num=-60;
    string resultado;
    if(num==0)
        cout<<"Es un numero cero";
    else
    {
    resultado = (num>0) ? "Es un numero Positivo"  : "Es un numero negativo";
    cout<<resultado;
    }
    return 0;
}