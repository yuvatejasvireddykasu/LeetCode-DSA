class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int minP=INT_MAX;
        for(auto it : prices){
            minP=min(it,minP);
            maxi=max(maxi,it-minP);
        }
        return maxi;
        
    }
};