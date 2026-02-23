class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int sum=0;
        for(auto it :nums){
            if(it==0)
            sum=-1;

            sum+=1;
            ans=max(sum,ans);
        }
        return ans;
    }
};