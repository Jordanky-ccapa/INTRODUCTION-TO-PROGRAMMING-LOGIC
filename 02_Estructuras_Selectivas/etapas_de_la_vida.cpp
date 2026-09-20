#include <iostream>
using namespace std;

int main() {
    int edad;
    cin >> edad;

    if (edad <= 3)
        cout << "BEBE";
    else if (edad <= 14)
        cout << "NINO";
    else if (edad <= 18)
        cout << "JOVEN";
    else if (edad <= 65)
        cout << "ADULTO";
    else
        cout << "ADULTO 3RA";

    return 0;
}