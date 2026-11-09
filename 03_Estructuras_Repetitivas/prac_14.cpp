#include <iostream>
using namespace std;

int main() {
    int n,i,k;
    int A[100],B[100];

    cin>>n;

    if(n<1 || n>100)
        return 0;

    for(i=0;i<n;i++) {
        cin>>A[i];
    }

    cout<<"Ingrese el escalar: ";
    cin>>k;

    for(i=0;i<n;i++) {
        B[i]=A[i]*k;
    }

    for(i=0;i<n;i++) {
        cout<<B[i]<<" ";
    }

    return 0;
}