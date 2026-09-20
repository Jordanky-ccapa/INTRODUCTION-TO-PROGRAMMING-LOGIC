#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    // Generar la eleccion de la computadora.
    srand(time(0));
    int computadora;
    computadora = rand() % 3 + 1;

    int jugador = 0;

    cout << "=== PIEDRA, PAPEL O TIJERA ===\n";
    cout << "1. Piedra\n";
    cout << "2. Papel\n";
    cout << "3. Tijera\n";
    cout << "Elige una opcion (1, 2 o 3): ";
    cin >> jugador;

    // Comprobar que la entrada sea valida.
    if (cin.fail() || jugador < 1 || jugador > 3) {
        cout << "Opcion invalida. Debes ingresar 1, 2 o 3.\n";
    } else {
        // Mostrar la eleccion del jugador.
        if (jugador == 1) {
            cout << "Tu elegiste: Piedra\n";
        } else if (jugador == 2) {
            cout << "Tu elegiste: Papel\n";
        } else {
            cout << "Tu elegiste: Tijera\n";
        }

        // Mostrar la eleccion de la computadora.
        if (computadora == 1) {
            cout << "La computadora eligio: Piedra\n";
        } else if (computadora == 2) {
            cout << "La computadora eligio: Papel\n";
        } else {
            cout << "La computadora eligio: Tijera\n";
        }

        // Comparar las elecciones para decidir el resultado.
        if (jugador == computadora) {
            cout << "Empate.\n";
        } else if ((jugador == 1 && computadora == 3) ||
                   (jugador == 2 && computadora == 1) ||
                   (jugador == 3 && computadora == 2)) {
            cout << "Ganaste.\n";
        } else {
            cout << "Gano la computadora.\n";
        }
    }

    return 0;
}