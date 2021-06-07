#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[], int n){
    int i;
    struct Node *t,*last;
    first = new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    
    for(i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void RDisplay(struct Node *p){
    if(p!=NULL){
        cout<<p->data<<"\t";
        RDisplay(p->next);
    }
}

int sum(struct Node *p){
    int sum=0;
    while(p){
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}

int Rsum(struct Node *p){
    if(p!=NULL){
        return Rsum(p->next)+p->data;
    }else{
        return 0;
    }
}

int main() {
    int A[]={3,5,7,10,15};
    create(A,5);
    cout<<Rsum(first)<<endl;
    cout<<sum(first)<<endl;
	return 0;
}