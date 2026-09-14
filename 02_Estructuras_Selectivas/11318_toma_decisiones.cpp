#include <iostream>
using namespace std;

int main() 
{
    int a, b, resultado;

    cin >> a >> b;

    if (a + b == 5) {
        b = b + 3;
        resultado = 2 * a + b;
    } else {
        a = a - 1;

        if ((7 * a + b) % 2 != 0) {
            resultado = a * b;
        } else {
            resultado = a - b;
        }
    }

    cout << resultado;

    return 0;
}