#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0; i<n; i++){
        cin>>a[i]>>b[i];
    }
    int cap=INT_MIN;
    int en=0;
    int ex=0;
    for(int i=0; i<n-1; i++){
        en=ex+b[i];
        ex=en-a[i+1];
        cap=max(cap,en);
    }
    cout<<cap<<endl;
    return 0;
}