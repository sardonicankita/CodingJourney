#include<iostream>
using namespace std;

int main(){
    int k, n, w;
    cin>>k>>n>>w;
    long long c=0;
    for(int i=1; i<=w; i++){
        c+=k*i;
    }
    if(c<=n){
        cout<<0<<endl;
    }
    else{
        long ans=c-n;
        cout<<ans<<endl;
    }
    return 0;
}