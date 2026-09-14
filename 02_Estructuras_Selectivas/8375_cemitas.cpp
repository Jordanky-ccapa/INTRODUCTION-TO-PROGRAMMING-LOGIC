#include <iostream>
using namespace std;

int main() 
{
    int ganancia, perdida;

    cin >> ganancia >> perdida;

    if (ganancia > perdida) {
        cout << "El negocio si va a jalar ";
        cout << ganancia - perdida;
    } else {
        cout << "Dejalo ya esta muerto ";
        cout << perdida - ganancia;
    }

    return 0;
}