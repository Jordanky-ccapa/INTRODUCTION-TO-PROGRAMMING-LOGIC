#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    cout<<"PROMEDIO DE NOTAS ";
    cout<<"\n"; 

    char estudiante[50];
    int nota1, nota2, nota3;
    
    cout<<"\nINGRESE NOMBRE DEL ESTUDIANTE: ";
    cin.getline(estudiante,50,'\n');

    cout<<"INGRESE NOTA 1: ";
    cin>>nota1;
    cout<<"INGRESE NOTA 2: ";
    cin>>nota2;
    cout<<"INGRESE NOTA 3: ";
    cin>> nota3;

    double promedio =(nota1+nota2+nota3)/ 3.0;
    cout<<"----------------------------\n";
    cout<<"SU PROMEDIO ES: "<<fixed<<setprecision(2)<<promedio;
}