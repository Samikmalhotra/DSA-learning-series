#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void Insertion(int A[],int n){
    int i,j,x;
    for(int i=1;i<n;i++){
        j=i-1;
        x=A[i];
        while(j>-1 && A[j]>x)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }
}

int main() {
    int A[]={11,13,7,2,6,9,4,5,10,3};
    int n= sizeof(A)/sizeof(A[0]);
    Insertion(A,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<' ';
    }
	return 0;
}
