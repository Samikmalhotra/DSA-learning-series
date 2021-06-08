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

void SortedInsert(struct Node *p,int x){
    struct Node *t,*q=NULL;
    t=new Node;
    t->data=x;
    t->next=NULL;
    
    if(first==NULL){
        first = t;
    }else{
        while(p && p->data < x){
            q=p;
            p=p->next;
        }
        if(p==first){
            t->next=first;
            first=t;
        }else{
            t->next=q->next;
            q->next=t;
        }
    }
    
}

int main() {
    struct Node *temp;
    int A[]={3,5,7,10,15};
    create(A,5);
    
    SortedInsert(first,20);
    
    RDisplay(first);
    
	return 0;
}