#include<iostream>
using namespace std;

int main(){
    int t, x, y, a, b;
    cin>>t;
    while(t--){
        cin>>x>>y>>a>>b;
        int t1=a/x;
        int t2=b/y;
        cout<<t1+t2<<"\n";
    }
    return 0;
}