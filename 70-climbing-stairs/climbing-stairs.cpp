class Solution {
public:
    // int rec(int n, vector<int> &memo){
    //     if(n==1 || n==2)
    //     return n;

    //     if(memo[n]!=0)
    //     return memo[n];
    //     return memo[n]=rec(n-1,memo)+rec(n-2,memo);
    // }
    int climbStairs(int n) { 
        if(n<=2)
        return n;

        vector<int> dp(n+1,0);
        dp[1]=1,dp[2]=2;

        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};