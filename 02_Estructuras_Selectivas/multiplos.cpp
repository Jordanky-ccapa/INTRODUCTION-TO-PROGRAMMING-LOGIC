#include <iostream>
using namespace std;
int main(){
     int n,a,b,c;
     int noprimo = 0, primo=0;

     cout<<"INTTRODUCIR UN NUMERO DE 3 DIGITOS: ";
     cin>>n;

     a=n/100;
     b=(n/10)%10;
     c=n%10;

     if (a==2||a==3||a==5||a==7)
        primo += a;
        else
        noprimo++;
    if (b==2||b==3||b==5||b==7)
        primo += b;
        else
        noprimo++;
    if (c==2||c==3||c==5||c==7)
        primo += c;
        else
        noprimo++;

    cout<<"CANTIDAD DE NO PRIMOS: "<<noprimo;
    cout<<"\n SUMA DE PRIMOS: "<<primo;

return 0;
}