
#include <iostream>
using namespace std;

int main() {
    int n,i,num,pos=-1;
    int A[100];

    cin>>n;

    if(n<1 || n>100)
        return 0;

    for(i=0;i<n;i++) {
        cin>>A[i];
    }

    cout<<"Numero a buscar: ";
    cin>>num;

    for(i=0;i<n;i++) {
        if(A[i]==num) {
            pos=i;
            break;
        }
    }

    if(pos!=-1) {
        cout<<"Se encuentra en la posicion: "<<pos+1;
    }
    else {
        cout<<"Numero no encontrado";
    }

    return 0;
}
