#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}


void Merge(int A[], int l, int mid, int h){
    int n1=mid-l+1;
    int n2=h-mid;
    
    int b[n1];
    int c[n2];
    
    for(int i=0;i<n1;i++){
        b[i]=A[l+i];
    }
    for(int i=0;i<n2;i++){
        c[i]=A[mid+1+i];
    }
    
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(b[i]<c[j]){
            A[k]=b[i];
            k++;i++;
        }else{
            A[k]=c[j];
            k++;j++;
        }
    }
    
    for(;i<n1;i++){
        A[k]=b[i];
        k++;
    }
    for(;j<n2;j++){
        A[k]=b[j];
        k++;
    }
}

void MergeSort(int A[], int l, int h){
    if(l<h){
        int mid = (l+h)/2;
        MergeSort(A, l, mid);
        MergeSort(A,mid+1,h);
        
        Merge(A, l, mid, h);
    }
}

int main() {
    int A[]={10,9,8,7,6,5};
    int n= sizeof(A)/sizeof(A[0]);
    MergeSort(A,0,n-1);
    for(int i=0;i<n;i++){
        cout<<A[i]<<' ';
    }
	return 0;
}