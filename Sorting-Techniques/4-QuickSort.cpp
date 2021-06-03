#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int partition(int A[], int l, int h){
    int pivot=A[l];
    int i=l,j=h;
    
    do{
        do{i++;} while(A[i]<=pivot);
        do{j--;} while(A[j]>pivot);
        
        if(i<j) swap(A[i], A[j]);
    }while(i<j);
    
    swap(A[l],A[j]);
    return j;
    
}

void QuickSort(int A[], int l, int h){
    int j;
    if(l<h){
        j=partition(A,l,h);
        QuickSort(A,l,j);
        QuickSort(A,j+1,h);
    }
}

int main() {
    int A[]={11,13,7,2,16,9,24,5,10};
    int n= sizeof(A)/sizeof(A[0]);
    QuickSort(A,0,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<' ';
    }
	return 0;
}
