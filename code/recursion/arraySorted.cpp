#include<iostream>
using namespace std;

bool recursion(int arr[], int n){
    if(n==1)return true;

    bool restArray=recursion(arr +1, n-1);

    
    //base cond;
    if(arr[0]<arr[1] && restArray==true)return true;
    return false;
}

int main(){
    int arr[10]={1, 2, 3, 4, 5, 6, 7 , 8, 9, 10};
    cout<<recursion(arr, 10);
}