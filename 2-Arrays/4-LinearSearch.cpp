#include <bits/stdc++.h>
using namespace std;

int LinearSearch(int a[], int key, int length)
{

    for (int i = 0; i < length; i++)
    {
        if (key == a[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int A[] = {4, 5, 7, 2, 3, 9, 1, 8};
    int key;
    int length = sizeof(A) / sizeof(A[0]);
    cout << "Enter key";
    cin >> key;
    cout << "Index of element is " << LinearSearch(A, key, length);
}