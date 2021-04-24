#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, index;
    int length;
    int A[10];
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        cin >> A[i];
    }
    cout << "enter x";
    cin >> x;
    cout << "Enter index";
    cin >> index;

    // Append
    A[length] = x;
    length++;

    // Insert
    for (int i = length; i > index; i--)
    {
        A[i] = A[i - 1];
    }
    A[index] = x;
    length++;

    for (int i = 0; i < length; i++)
    {
        cout << A[i];
    }
}
