#include <iostream>
using namespace std;

int main()
{
    int n, i, j, signo;
    double x, S, P;

    cin >> x >> n;

    S = 0;
    signo = 1;
    for (i = 1; i <= n; i++)
    {
        P = 1;
        for (j = 1; j <= i; j++)
        {
            P = P * x;
        }
        S = S + signo * (P / i);
        signo = -signo;
    }
    cout << S;
    return 0;
}