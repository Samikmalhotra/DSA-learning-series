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

// Changing elements
void Reverse1(struct Node *p){
    int *A, i=0;
    struct Node *q=p;
    
    A = new int[count(p)];
    
    while(q!=NULL){
        A[i]=q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while(q!=NULL){
        q->data=A[i];
        q=q->next;
        i--;
    }
}

// Changing Nodes
void Reverse2(struct Node *p){
    struct Node *q=NULL,*r=NULL;
    
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}

// Using Recursion
void Reverse3(struct Node *q, struct Node *p){
    if(p){
        Reverse3(p,p->next);
        p->next=q;
    }else{
        first=q;    
    }
}
int main() {
    struct Node *temp;
    int A[]={10,20,30,40,50};
    int n = sizeof(A)/sizeof(A[0]);
    create(A,n);
    
    Reverse1(first);
    Reverse2(first);
    Reverse3(NULL,first);
    
    RDisplay(first);

    
	return 0;
}