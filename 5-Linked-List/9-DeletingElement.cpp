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

int Delete(struct Node *p, int index){
    struct Node *q=NULL;
    int x=-1;
    
    if(index<1 || index>count(p)){
        return -1;
    }
    if(index==1){
        q=first;
        x=first->data;
        first=first->next;
        delete q;
        return x;
    }else{
        for(int i=0;i<index-1;i++){
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        delete p;
        return x;
    }
}

int main() {
    struct Node *temp;
    int A[]={3,5,7,10,15};
    create(A,5);
    
    Delete(first,2);

    RDisplay(first);
    
	return 0;
}