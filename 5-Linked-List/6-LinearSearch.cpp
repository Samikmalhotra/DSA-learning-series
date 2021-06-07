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

struct Node * Lsearch(struct Node *p, int key){
    while(p!=NULL){
        if(key==p->data){
            return p;
        }
        p=p->next;
    }
    return NULL;
}

struct Node * Rsearch(struct Node *p, int key){
    if(p==NULL){
        return NULL;
    }
    if(key==p->data){
        return p;
    }
    return Rsearch(p->next,key);
}

int main() {
    struct Node *temp;
    int A[]={3,5,7,10,15};
    create(A,5);
    temp = Rsearch(first, 15);
    if(temp){
        cout<<"Key found: "<<temp->data;
    }
    else{
        cout<<"key not found";
    }
    
	return 0;
}