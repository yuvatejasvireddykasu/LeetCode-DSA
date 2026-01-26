class Solution {
public:

    bool rec(vector<int>& nums,vector<vector<int>> &dp,int ind,int tar){
        if(ind==nums.size()-1){
            if(nums[ind]==tar)
            return true;
            return false;
        }

        if(tar==0)
        return true;

        if(dp[ind][tar]!=-1)
        return dp[ind][tar];
        bool notTake = rec(nums,dp,ind+1,tar);

        bool take=false;
        if(nums[ind]<=tar)
        take=rec(nums,dp,ind+1,tar-nums[ind]);

        return dp[ind][tar]=notTake||take;
    }
    bool canPartition(vector<int>& nums) {
        int ts=0;
        for(auto i:nums){
            ts+=i;
        }
        if(ts%2!=0)
        return false;
        ts=ts/2;
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int>(ts+1,-1));
        return rec(nums,dp,0,ts);
        
    }
};