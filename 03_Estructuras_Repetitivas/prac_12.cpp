#include <iostream>
using namespace std;

int main() {
    int n,i,mayor,menor;
    int A[100];

    cin>>n;

    if(n<1 || n>100)
        return 0;

    for(i=0;i<n;i++) {
        cin>>A[i];
    }

    mayor=A[0];
    menor=A[0];

    for(i=1;i<n;i++) {
        if(A[i]>mayor) {
            mayor=A[i];
        }

        if(A[i]<menor) {
            menor=A[i];
        }
    }

    cout<<"Mayor: "<<mayor<<endl;
    cout<<"Menor: "<<menor;

    return 0;
}
