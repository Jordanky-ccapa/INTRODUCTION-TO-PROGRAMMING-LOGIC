#include <iostream>
using namespace std;

int main() {
    int ganancias, perdidas;

    cin >> ganancias >> perdidas;

    if (ganancias > perdidas) {
        cout << "El negocio si va a jalar ";
        cout << ganancias - perdidas << endl;
    } else {
        cout << "Dejalo ya esta muerto ";
        cout << perdidas - ganancias << endl;
    }

    return 0;
}