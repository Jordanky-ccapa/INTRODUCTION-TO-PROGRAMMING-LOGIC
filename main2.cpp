#include <iostream>
using namespace std;
int main() 
{
    int contrasena;
    do
    {
        cout << "INGRESE LA CONTRASENA: ";
        cin>> contrasena;

        if (contrasena!=1234)
        {
            cout<<"CONTRASENA INCORRECTA.\n";
            cout<<"INTENTAR DE NUEVO.\n";
        }
    
    } while (contrasena!=1234);
    cout<<"CONTRASENA CORRECTA";

    return 0;
}