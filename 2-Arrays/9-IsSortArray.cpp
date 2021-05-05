#include <bits/stdc++.h>
using namespace std;

void InsertSort(int a[], int length, int x)
{
    int i = length - 1;
    while (i >= 0 && a[i] > x)
    {
        a[i + 1] = a[i];
        i--;
    }
    a[i + 1] = x;
    length++;
}
int main()
{
    int A[] = {2, 4, 6, 8, 9};
    int length = (sizeof(A) / sizeof(A[0]));
    InsertSort(A, length, 5);
    for (int j = 0; j < length; j++)
    {
        cout << A[j] << ' ';
    }
}