#include <iostream>
using namespace std;

int main() {
    int n,i;
    int A[100],B[100],C[100];

    cin>>n;

    if(n<1 || n>100)
        return 0;

    for(i=0;i<n;i++) {
        cin>>A[i];
    }

    for(i=0;i<n;i++) {
        cin>>B[i];
    }

    for(i=0;i<n;i++) {
        C[i]=A[i]+B[i];
    }

    cout<<"Suma de arreglos: "<<endl;

    for(i=0;i<n;i++) {
        cout<<C[i]<<" ";
    }

    return 0;
}
