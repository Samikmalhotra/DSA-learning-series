#include <bits/stdc++.h>
using namespace std;

float e(double x, double n)
{
    float s = 1;

    for (; n > 0; n--)
    {
        s = 1 + ((x / n) * s);
    }
    return s;
}

int main()
{
    cout << e(1, 10);
    return 0;
}
