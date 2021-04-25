#include <bits/stdc++.h>
using namespace std;

void Reverse(int a[], int length)
{
    int b[length];
    int i, j;
    for (i = length - 1, j = 0; i >= 0; i--, j++)
    {
        b[j] = a[i];
    }
    for (i = 0; i < length; i++)
    {
        a[i] = b[i];
    }
}

int main()
{
    int A[] = {2, 4, 6, 8, 9};
    int length = (sizeof(A) / sizeof(A[0]));
    Reverse(A, length);
    for (int i = 0; i < length; i++)
    {
        cout << A[i] << ' ';
    }
}