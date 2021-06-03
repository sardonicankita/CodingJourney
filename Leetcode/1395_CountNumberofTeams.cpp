//1395. Count Number of Teams
//MEDIUM


class Solution {
public:
    int numTeams(vector<int>& rating) {
      int ans=0;
        for(int j=1; j<rating.size()-1; j++){
            int iSmall=0, iLarge=0, kSmall=0, kLarge=0;
            for(int i=0; i<j; i++){
              if(rating[i] < rating[j]) iSmall++;
                else if(rating[i] > rating[j]) iLarge++;
            }
            
             for(int k=j+1; k<rating.size(); k++){
                 if(rating[j] < rating[k]) kLarge++;
                else if(rating[j] > rating[k]) kSmall++;
            }
            ans += iSmall * kLarge + iLarge * kSmall;
        }
        return ans;
    }
};
