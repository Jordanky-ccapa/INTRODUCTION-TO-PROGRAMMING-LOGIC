#include <iostream>
using namespace std;

int main() {
    int n,i;
    int A[100];

    cin>>n;

    if(n<1 || n>100)
        return 0;

    for(i=0;i<n;i++) {
        A[i]=i+1;
    }

    for(i=0;i<n;i++) {
        cout<<A[i]<<",";
    }

    return 0;
}