
#include <iostream>
using namespace std;

int main() {
    int i,suma=0;
    int A[10];
    float media;

    for(i=0;i<10;i++) {
        cin>>A[i];
        suma=suma+A[i];
    }

    media=suma/10.0;

    cout<<"La media es: "<<media;

    return 0;
}
