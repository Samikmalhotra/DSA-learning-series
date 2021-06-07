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

void Insert(struct Node *p, int index, int x){
    struct Node *t;
    int i;
     if(index<0 || index > count(p))
        return;
    
    t=new Node;
    t->data=x;

    if(index==0){
        t->next = first;
        first = t;
    }else{
        for(i=0;i<index-1;i++){
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }

}

int main() {
    struct Node *temp;
    int A[]={3,5,7,10,15};
    create(A,5);
    
    Insert(first, 1 ,2);
    
    RDisplay(first);
    
	return 0;
}