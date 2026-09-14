#include <iostream>
using namespace std;
int main()
{
    int N,U,T,R;

    cout<<"ingresar un numero de 3 digitos: \n";
    cin>>N;
    
    U= N % 10;
    T= N / 10;
    R= U * 100 + T;

    cout<<"VOLTEADO ES: "<< U << T;


}