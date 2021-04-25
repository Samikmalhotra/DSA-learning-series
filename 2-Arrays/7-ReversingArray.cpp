#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

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

void Reverse2(int a[], int length)
{
    int temp;
    for (int i = 0; i < length / 2; i++)
    {
        swap(a[i], a[length - 1 - i]);
    }
}

int main()
{
    int A[] = {2, 4, 6, 8, 9};
    int length = (sizeof(A) / sizeof(A[0]));
    Reverse2(A, length);
    for (int i = 0; i < length; i++)
    {
        cout << A[i] << ' ';
    }
}