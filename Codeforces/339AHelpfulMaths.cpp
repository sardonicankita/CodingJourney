#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int>ans;
    for(int i=0; i<s.size(); i+=2){
            ans.push_back(s[i]);
    }
    sort(ans.begin(), ans.end());

    for(int i=0; i<ans.size()-1; i++)
     cout<<ans[i]<<"+";

     cout<<ans[ans.size()];
   return 0;
}