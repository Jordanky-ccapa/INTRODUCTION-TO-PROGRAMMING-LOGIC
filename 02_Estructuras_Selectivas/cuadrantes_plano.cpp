#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Ingrese la coordenada X: ";
    cin >> x;

    cout << "Ingrese la coordenada Y: ";
    cin >> y;

    if (x > 0 && y > 0) {
        cout << "El punto esta en el primer cuadrante";
    } 
    else if (x < 0 && y > 0) {
        cout << "El punto esta en el segundo cuadrante";
    } 
    else if (x < 0 && y < 0) {
        cout << "El punto esta en el tercer cuadrante";
    } 
    else {
        cout << "El punto esta en el cuarto cuadrante";
    }

    return 0;
}