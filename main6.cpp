// UN DOCENTE NECESITA TENER EL CONTROL DE LOS PROMEDIOS DE NOATAS DE UN GRUPO DE DETERMINADO DE ESTUDIANTES, PARA LO CUAL NECESITA UNA APLICACION QUE, DADAS LAS TRES NOTAS, PERMITA RESOLVER EL PROMEDIO POR ELLOS MISMO.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double nota1,nota2,nota3;
    string alumnos;

    cout<<"PROMEDIO DE NOTAS\n";

    cout<<"INGRESE NOMBRE DEL ESTUDIANTE: ";
    getline(cin,alumnos);
    cout<<"INGRESE NOTA 1: ";cin>>nota1;
    cout<<"INGRESE NOTA 2: ";cin>>nota2;
    cout<<"INGRESE NOTA 3: ";cin>>nota3;

    double promedio=(nota1+nota2+nota3)/ 3;
    cout<<"--------------------------\n"; 
    cout<<"SU PROMEDIO ES: "<<fixed<<setprecision(2)<<promedio<<" puntos";
}

