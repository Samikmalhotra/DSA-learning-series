#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int a[], int key, int length)
{
    int l, h, mid;
    l = 0;
    h = length - 1;

    while (l <= h)
    {
        mid = ((l + h) / 2);
        if (key == a[mid])
        {
            return mid;
        }
        else if (key < a[mid])
        {
            h = mid - 1;
        }
        else if (key > a[mid])
        {
            l = mid + 1;
        }
    }
    return -1;
}

int RBinarySearch(int a[], int key, int l, int h)
{
    int mid;
    if (l <= h)
    {
        mid = ((l + h) / 2);
        if (key == a[mid])
        {
            return mid;
        }
        else if (key < a[mid])
        {
            return RBinarySearch(a, key, l, mid - 1);
        }
        else
        {
            return RBinarySearch(a, key, mid + 1, h);
        }
    }
    return -1;
}

int main()
{
    int A[] = {2,
               5,
               9,
               13,
               17,
               26,
               29,
               34,
               37,
               40};
    int key;
    cout << "Enter key";
    cin >> key;
    int length = sizeof(A) / sizeof(A[0]);
    int l = 0;
    int h = length - 1;
    cout << "Index of element is" << BinarySearch(A, key, length);
    cout << "\nIndex of element is" << RBinarySearch(A, key, l, h);
}