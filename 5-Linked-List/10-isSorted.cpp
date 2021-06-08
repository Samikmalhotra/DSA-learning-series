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

int isSorted(struct Node *p){
    int x=INT32_MIN;
    while(p){
        if(p->data < x){
            return 0;
        }
        x=p->data;
        p=p->next;
    }
    return 1;
}

int main() {
    struct Node *temp;
    int A[]={3,5,7,10,15};
    create(A,5);
    
    cout<<isSorted(first);

    
	return 0;
}