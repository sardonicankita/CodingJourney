#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, word="hello";
    cin>>s;
    int k=0, count=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]==word[k]){
            k++, count++;
        }
    }

    if(count==5){
        cout<<"YES";
    }else
    cout<<"NO";
    return 0;
}