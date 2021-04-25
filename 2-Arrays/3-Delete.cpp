#include <bits/stdc++.h>
using namespace std;

int main()
{
    int index, length;
    int A[10];
    cin >> length;
    for (int i = 0; i < length; i++)
    {
        cin >> A[i];
    }
    cout << "Enter index";
    cin >> index;
    for (int i = index; i < length - 1; i++)
    {
        A[i] = A[i + 1];
    }
    length--;

    for (int i = 0; i < length; i++)
    {
        cout << A[i];
    }
}