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

int count(struct Node *p){
    int l=0;
    while(p){
        l++;
        p=p->next;
    }
    return l;
}

int Rcount(struct Node *p){
    if(p!=NULL){
        return Rcount(p->next)+1;
    }else{
        return 0;
    }
}

int main() {
    int A[]={3,5,7,10,15};
    create(A,5);
    cout<<Rcount(first)<<endl;
    cout<<count(first)<<endl;
	return 0;
}