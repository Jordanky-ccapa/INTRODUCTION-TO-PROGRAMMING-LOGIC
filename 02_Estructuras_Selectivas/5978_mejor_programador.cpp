#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre1, nombre2;
    int puntaje1, puntaje2;

    cin >> nombre1 >> puntaje1;
    cin >> nombre2 >> puntaje2;

    if (puntaje1 > puntaje2) {
        cout << nombre1 << endl;
    } else {
        cout << nombre2 << endl;
    }

    return 0;
}