#include <iostream>
using namespace std;
int main()
{  int CLAVE, NUMIN;
    cin>>CLAVE>>NUMIN;
    switch(CLAVE){
        case 12: cout<<(NUMIN*2)<<endl; break;
        case 15: cout<<(NUMIN*2.2)<<endl; break;
        case 18: cout<<(NUMIN*4.5)<<endl; break;
        case 19: cout<<(NUMIN*3.5)<<endl; break;
        case 23: cout<<(NUMIN*6)<<endl;  break;
        case 25: cout<<(NUMIN*6)<<endl;  break;
        case 29: cout<<(NUMIN*5)<<endl;  break;
        default: cout<<"Vuelva a intentarlo."<<endl;
    }
    return 0;
}