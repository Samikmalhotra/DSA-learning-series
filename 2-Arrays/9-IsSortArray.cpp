#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void Rearrange(int a[], int length)
{
    int i = 0;
    int j = length - 1;

    while (i < j)
    {
        while (a[i] < 0)
            i++;
        while (a[i] > 0)
            j--;
        if (i < j)
        {
            swap(a[i], a[j]);
        }
    }
}

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

int isSorted(int a[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (a[i] > a[i + 1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int A[] = {2, 4, -4, -7, 6, 8, 9};
    int length = (sizeof(A) / sizeof(A[0]));
    // InsertSort(A, length, 5);
    Rearrange(A, length);

    for (int j = 0; j < length; j++)
    {
        cout << A[j] << ' ';
    }
    cout << isSorted(A, length);
}