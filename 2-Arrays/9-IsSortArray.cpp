#include <bits/stdc++.h>
using namespace std;

void InsertSort(int a[], int length, int x)
{
    int i = length - 1;
    length++;
    while (i >= 0 && a[i] > x)
    {
        a[i + 1] = a[i];
        i--;
    }
    a[i + 1] = x;
}
int main()
{
    int A[] = {2, 4, 6, 8, 9};
    int length = (sizeof(A) / sizeof(A[0]));
    InsertSort(A, length, 5);
    for (int i = 0; i < length; i++)
    {
        cout << A[i] << ' ';
    }
}