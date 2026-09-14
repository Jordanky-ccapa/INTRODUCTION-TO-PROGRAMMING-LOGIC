#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string palabra1, palabra2, palabra3;

    cin >> palabra1;
    cin >> palabra2;
    cin >> palabra3;

    if (palabra1 == "vertebrado") {

        if (palabra2 == "ave") {
            if (palabra3 == "carnivoro") {
                cout << "aguia";
            } else {
                cout << "pomba";
            }
        } else {
            if (palabra3 == "onivoro") {
                cout << "homem";
            } else {
                cout << "vaca";
            }
        }

    } else {

        if (palabra2 == "inseto") {
            if (palabra3 == "hematofago") {
                cout << "pulga";
            } else {
                cout << "lagarta";
            }
        } else {
            if (palabra3 == "hematofago") {
                cout << "sanguessuga";
            } else {
                cout << "minhoca";
            }
        }
    }

    return 0;
}