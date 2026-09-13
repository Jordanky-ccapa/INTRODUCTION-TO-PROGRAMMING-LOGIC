#include <iostream>
using namespace std;

int main() {
    bool mayorDeEdad, vip, ingreso;

    cout << "Tiene 18 anios o mas? (1=Si, 0=No): ";
    cin >> mayorDeEdad;

    cout << "Es VIP? (1=Si, 0=No): ";
    cin >> vip;

    ingreso = mayorDeEdad && vip;

    cout << "Puede ingresar: " << ingreso;

    return 0;
}