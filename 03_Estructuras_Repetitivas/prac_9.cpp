
#include <iostream>
using namespace std;

int main() {
    int i;
    int A[5],B[5];

    for(i=0;i<5;i++) {
        cin>>A[i];
        B[i]=A[i]*2;
    }

    cout<<"Primer arreglo: "<<endl;

    for(i=0;i<5;i++) {
        cout<<A[i]<<" ";
    }

    cout<<endl<<"Segundo arreglo: "<<endl;

    for(i=0;i<5;i++) {
        cout<<B[i]<<" ";
    }

    return 0;
}
