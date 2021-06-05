#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int d, n, p, q;
        cin>>d>>n>>p>>q;

        int c=0;
        int x=d/n;
        if(x%2==0){
            c+=n*((x / 2)*(2*p +(x-1)*q ) );
        }else{
            c+= n*(x* (p+((x-1)/2)*q));
        }
        c+=(d%n)*(p+(x)*q);
        cout<<c<<"\n";
    }
}