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

int Max(struct Node *p){
    int max=INT32_MIN;
    while(p){
        if(p->data > max){
            max=p->data;
        }
        p=p->next;
    }
    return max;
}

int RMax(struct Node *p){
    int x=0;
    if(p==0){
        return INT32_MIN;
    }
    x=RMax(p->next);
    if(x>p->data){
        return x;
    }else{
        return p->data;
    }
}

int main() {
    int A[]={3,5,7,10,15};
    create(A,5);
    cout<<RMax(first)<<endl;
    cout<<Max(first)<<endl;
	return 0;
}