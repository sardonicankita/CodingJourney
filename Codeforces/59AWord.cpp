#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[100];
    cin>>s;
    int n=strlen(s);
    int count=0;
    for(int i=0; i<n; i++){
        if(s[i]>='A' && s[i]<='Z')
            count++;
    }

    if(count>n/2){
        for(int i=0; i<n;i++){
            char ch=s[i];
            putchar(toupper(ch));
        }
    }
    else{
        for(int i=0; i<n; i++){
             char ch=s[i];
            putchar(tolower(ch));
        }
    }
    return 0;
}