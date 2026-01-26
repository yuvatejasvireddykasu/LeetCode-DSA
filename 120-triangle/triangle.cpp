class Solution {
public:
    int rec(vector<vector<int>>& t,vector<vector<int>>& dp,int i,int j,int n){
        if(i>=n || j>(i+1))
        return INT_MAX;

        if(dp[i][j]!=INT_MAX)
        return dp[i][j];

        if(i==n-1)
        return t[i][j];

        int u1= rec(t,dp,i+1,j,n);
        int u2=rec(t,dp,i+1,j+1,n);

        return dp[i][j]=min(u1,u2)+t[i][j];
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>> dp(n,vector<int>(n,INT_MAX));
        return rec(triangle,dp,0,0,n);
    }
};