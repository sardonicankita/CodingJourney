#include<iostream>
using namespace std;

int getBit(int n, int i){
    return ((n & (1<<i))!=0);
}

int main(){
    cout<<getBit(5, 2);
    return 0;
}