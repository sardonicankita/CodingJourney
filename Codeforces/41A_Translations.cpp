#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
     string b;
    cin>>a>>b;
    int c=0;
    if(a.size()==b.size()){
        for(int i=0; i<a.size(); i++){
            if(a[i]==b[b.size()-1-i]){
                c++;
            }
        }
    }
    if(c==a.size()){
        cout<<"YES";
    }
    else cout<<"NO";
}