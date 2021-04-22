#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int F[10];

int mfib(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
        {
            F[n - 2] = mfib(n - 2);
        }
        if (F[n - 1] == -1)
        {
            F[n - 1] = mfib(n - 1);
        }
        F[n] = F[n - 2] + F[n - 1];
        return F[n - 2] + F[n - 1];
    }
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        F[i] = -1;
    }
    cout << fib(6);
    cout << mfib(6);
    return 0;
}