#include <bits/stdc++.h>
#define SIZE(arr) (sizeof(arr) / sizeof(arr[0]))
using namespace std;

void unionSortedArrays(int *arr1, int n1, int *arr2, int n2, int *result)
{
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            result[k] = arr1[i];
            ++k;
            ++i;
        }
        else if(arr2[j]<arr1[i])
        {
            result[k] = arr2[j];
            ++k;
            ++j;
        }
        else{
            result[k]=arr1[i];
            i++;
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        result[k] = arr1[i];
        ++k;
        ++i;
    }
    while (j < n2)
    {
        result[k] = arr2[j];
        ++k;
        ++j;
    }
}

void intersectionSortedArrays(int *arr1, int n1, int *arr2, int n2, int *result)
{
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            ++i;
        }
        else if(arr2[j]<arr1[i])
        {
            ++j;
        }
        else{
            result[k]=arr1[i];
            i++;
            k++;
            j++;
        }
    }
    
}

void differenceSortedArrays(int *arr1, int n1, int *arr2, int n2, int *result)
{
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            result[k] = arr1[i];
            ++k;
            ++i;
        }
        else if(arr2[j]<arr1[i])
        {
            ++j;
        }
        else{
            i++;
            j++;
        }
    }
    while (i < n1)
    {
        result[k] = arr1[i];
        ++k;
        ++i;
    }
    
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
	int arr1[] = {2,6,10,15,25};
    int arr2[] = {3,6,7,15,20};
    int result[SIZE(arr1)];

    // unionSortedArrays(arr1, SIZE(arr1), arr2, SIZE(arr2), result);
    // intersectionSortedArrays(arr1, SIZE(arr1), arr2, SIZE(arr2), result);
    differenceSortedArrays(arr1, SIZE(arr1), arr2, SIZE(arr2), result);
    display(result, SIZE(result));

	return 0;
}
