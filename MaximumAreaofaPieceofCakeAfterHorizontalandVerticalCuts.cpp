//Maximum Area of a Piece of Cake After Horizontal and Vertical Cuts
//MEDIUM

class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        int s=max(horizontalCuts[0], h-horizontalCuts.back());
        for(int i=1; i<horizontalCuts.size(); i++){
            int a=horizontalCuts[i]-horizontalCuts[i-1];
            s=max(s, a);
        }
        
        int r=max(verticalCuts[0], w-verticalCuts.back());
        for(int i=1; i<verticalCuts.size(); i++){
            int a=verticalCuts[i]-verticalCuts[i-1];
            r=max(r, a);
        }
        

        return long(r)*s %1000000007;        
    }
};