#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void Selection(int A[],int n){
    int i,j,k;
    for(int i=0;i<n-1;i++){
       102018031_ExpNo8_Samik_Malhotra         k=j;
            }
        }
        swap(A[i],A[k]);
    }
}

int main() {
    int A[]={11,13,7,2,16,9,24,5,10};
    int n= sizeof(A)/sizeof(A[0]);
    Selection(A,n);
    for(int i=0;i<n;i++){
        cout<<A[i]<<' ';
    }
	return 0;
}