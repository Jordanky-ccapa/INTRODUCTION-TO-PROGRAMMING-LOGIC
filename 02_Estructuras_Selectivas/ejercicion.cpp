#include <iostream>
using namespace std;
int main(){

    int filas;
    int columnas;

    cin>>filas;

    cin>>columnas;

   for (int i = 1; i <= filas ; i++)
   {
    for (int j = 1; j <= columnas; j++)
    {
        if ((i + j)%2==0)
        {
            cout<<"b";
        }
        else
        cout<<"n";  
    }
    cout << "\n";
   }
   
}