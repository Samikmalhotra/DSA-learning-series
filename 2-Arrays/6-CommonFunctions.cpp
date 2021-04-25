#include <bits/stdc++.h>
using namespace std;

int Get(int a[], int index, int length)
{
    if (index >= 0 && index < length)
        return a[index];
    return -1;
}
void Set(int *a, int index, int x, int length)
{
    if (index >= 0 && index < length)
        a[index] = x;
}
int Max(int a[], int length)
{
    int max = a[0];
    int i;
    for (i = 1; i < length; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}
int Min(int a[], int length)
{
    int min = a[0];
    int i;
    for (i = 1; i < length; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}
int Sum(int a[], int length)
{
    int s = 0;
    int i;
    for (i = 0; i < length; i++)
        s += a[i];
    return s;
}
float Avg(int a[], int length)
{
    return (float)Sum(a, length) / length;
}
int main()
{
    int A[] = {3,
               6,
               2,
               4,
               7};
    int length = sizeof(A) / sizeof(A[0]);

    Set(A, 2, 5, length);
    cout << Get(A, 2, length) << '\n';
    cout << Max(A, length) << '\n';
    cout << Min(A, length) << '\n';
    cout << Sum(A, length) << '\n';
    cout << Avg(A, length) << '\n';
    for (int i = 0; i < length; i++)
    {
        cout << A[i];
    }
}