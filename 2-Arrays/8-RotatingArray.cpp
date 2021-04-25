#include <bits/stdc++.h>
using namespace std;

void Rotate(int a[], int length)
{
    int temp;
    temp = a[0];
    for (int i = 1; i < length; i++)
    {
        a[i - 1] = a[i];
    }
    a[length - 1] = temp;
}

int main()
{
    int A[] = {2, 4, 6, 8, 9};
    int n;
    int length = (sizeof(A) / sizeof(A[0]));

    cout << "Enter number of times you want to rotate";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        Rotate(A, length);
    }

    Rotate(A, length);
    for (int i = 0; i < length; i++)
    {
        cout << A[i] << ' ';
    }
}