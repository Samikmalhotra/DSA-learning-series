#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[]="WELCOME";
    int i;
    for(i=0;s[i]!='\0';i++){
        if(s[i]>=65 && s[i]<=90){
            s[i]+=32;
        }else if(s[i]>'a' && s[i]<=122){
            s[i]-=32;
        }
    };
    cout<<"Length is"<<s;

    return 0;
}