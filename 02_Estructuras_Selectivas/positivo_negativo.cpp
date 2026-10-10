#include <iostream>
using namespace std;

int main() {
    double numero;

    cin >> numero;

    cout << (numero > 0 ? "POSITIVO"
                        : numero < 0 ? "NEGATIVO"
                                     : "CERO");

    return 0;
}