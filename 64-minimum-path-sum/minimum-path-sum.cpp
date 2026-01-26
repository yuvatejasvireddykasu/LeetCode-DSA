class Solution {
public:
    int rec(vector<vector<int>>& g,vector<vector<int>>& dp,int i,int j){
        if(i<0 || j<0)
        return INT_MAX;

        if(i==0 && j==0)
        return g[0][0];

        if(dp[i][j]!=-1)
        return dp[i][j];

        int up=rec(g,dp,i-1,j);
        int down=rec(g,dp,i,j-1);

        return dp[i][j]=min(up,down)+g[i][j];
    }
    int minPathSum(vector<vector<int>>& g) {
        int n=g.size();
        int m=g[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return rec(g,dp,n-1,m-1);
    }
};