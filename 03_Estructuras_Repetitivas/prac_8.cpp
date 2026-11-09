
#include <iostream>
using namespace std;

int main() {
    int n,i,ap=0,des=0;
    int A[100];
    float sumaap=0,sumades=0;

    cin>>n;

    if(n<1 || n>100)
        return 0;

    for(i=0;i<n;i++) {
        cin>>A[i];

        if(A[i]<0 || A[i]>20)
            return 0;

        if(A[i]>=11) {
            ap++;
            sumaap=sumaap+A[i];
        }
        else {
            des++;
            sumades=sumades+A[i];
        }
    }

    cout<<"Aprobados: "<<ap<<endl;
    cout<<"Desaprobados: "<<des<<endl;

    if(ap>0)
        cout<<"Promedio aprobados: "<<sumaap/ap<<endl;

    if(des>0)
        cout<<"Promedio desaprobados: "<<sumades/des;

    return 0;
}
