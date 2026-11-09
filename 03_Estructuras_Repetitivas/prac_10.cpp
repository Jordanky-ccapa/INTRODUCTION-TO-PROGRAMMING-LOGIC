#include <iostream>
using namespace std;

int main() {
    int i;
    int A[7]={1,5,8,3,30,9,13};

    for(i=0;i<7;i++) {
        if(A[i]%2!=0 && A[i]>3) {
            cout<<A[i]<<" ";
        }
    }

    return 0;
}
