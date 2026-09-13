 #include <iostream>
 using namespace std;
 int main()
 {
    cout<<"**IMPORTE MENSUAL DE EMPLEADOS**\n"; //son los mensajes 

    double costo_hora = 15;
    double importe, descuento, neto;
    double horas_trabajadas;
    string empleado;

    cout<<"INGRESE NOMBRE DEL EMPLEADO: ";//son los mensajes
    getline(cin,empleado);
    cout<<"INGRESE HORAS TRABAJADAS: ";
    cin>> horas_trabajadas;

    importe = horas_trabajadas * costo_hora;
    descuento = importe * 0.12;
    neto=importe - descuento;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout<<"\n**RESUMEN DE PAGOS**:";
    cout<<"\nEMPLEADO; "<<empleado;
    cout<<"\nCOSTO HORA S/:"<<costo_hora;
    cout<<"\nHORAS TRABAJADAS: "<< horas_trabajadas;
    cout<<"\n--------------------------------";
    cout<<"\nIMPORTE: S/"<<importe;
    cout<<"\nDESCUENTO: S/"<<descuento;
    cout<<"\nNETO: S/"<< neto;
    
    return 0;
 }