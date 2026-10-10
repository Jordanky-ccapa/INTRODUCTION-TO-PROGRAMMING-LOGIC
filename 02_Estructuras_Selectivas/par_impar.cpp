#include <iostream>
using namespace std;
int main(){
    int n, a, b, c;
    int par = 0 , impar = 0;

    cout<<"INTRODUCIR UN NUMERO DE 3 CIFRAS: ";
    cin>>n;

    a = n / 100;
    b = (n / 10) % 10;
    c = n % 10;

    if (a % 2 == 0)
        par++;
    else
        impar++;
    if (b % 2 == 0)
        par++;
    else
        impar++;
    if (c % 2 == 0)
        par++;
    else
        impar++;

    cout<<"DIGITOS PARES "<<par ;
    cout<<"\nDIGITODS IMPARES "<<impar;

    return 0;


}