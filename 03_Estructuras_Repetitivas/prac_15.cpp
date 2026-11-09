#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n,i,centro;
    int A[100];

    cin>>n;

    if(n<1 || n>100 || n%2==0) {
        cout<<"Ingrese un numero impar entre 1 y 99";
        return 0;
    }

    srand(time(0));

    for(i=0;i<n;i++) {
        A[i]=rand()%100+1;
    }

    for(i=0;i<n;i++) {
        cout<<A[i]<<" ";
    }

    centro=n/2;

    cout<<endl;
    cout<<"Elemento central: "<<A[centro];

    return 0;
}
