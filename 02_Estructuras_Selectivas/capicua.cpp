#include <iostream>
using namespace std;
int main () {
    int n, a, b, c, d;

    do {
        cout<< "INGRESE UN NUMERO DE 4 DIGITOS: ";
        cin>> n;
        if (n < 1000 || n > 9999) {
            cout << "\n NUMERO INVALIDO";
        }
    } while (n < 1000 || n > 9999);

    a = n/1000;
    b=(n/100)%10;
    c=(n/10)%10;
     d=n%10;

    if (a==d && b==c)
    cout<<"ES UN NUMERO CAPICUA";
    else
    cout<<"\n NO ES UN NUMERO CAPICUA";

    return 0;


}