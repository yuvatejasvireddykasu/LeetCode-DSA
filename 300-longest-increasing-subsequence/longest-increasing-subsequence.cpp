class Solution {
public:
    int p =INT_MIN;
    vector<int> v;
    vector<vector<int>> dp;
    int n;
    int rec(int i,int p){

      if(i==n)
      return 0;

      if(dp[i][p+1]!=-1)
      return dp[i][p+1];

        int take=0;
       if(p==-1|| v[p]<v[i]){
         take=1+rec(i+1,i);
       }  

       int nottake =rec(i+1,p);
       return dp[i][p+1]=max(take,nottake);
    }
    int lengthOfLIS(vector<int>& nums) {
         n=nums.size();
         v=nums;
         dp.assign(n,vector<int>(n+1,-1));
       return rec(0,-1);
    }
};