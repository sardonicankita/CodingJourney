//266PalindromPermutation
// EASY


int isPossible (string s)
{
    int ans[128]={0};
    
    for(int i=0; i<s.length(); i++){
        ans[s[i]]+=1;
    }
    
    int odd=0;
    
    for(int i=0; i<128; i++){
        if(ans[i] & 1)
           odd++;
           
        if(odd>1)
           return 0;
    }
    
    return 1;
}