#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, B, mayor, menor;

    cout << "Ingrese dos numeros: ";
    cin >> A >> B;

    mayor = (A + B + abs(A - B)) / 2;
    menor = (A + B - abs(A - B)) / 2;

    cout << "Numero mayor: " << mayor << endl;
    cout << "Numero menor: " << menor << endl;

    return 0;
}