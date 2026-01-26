class Solution {
public:
    vector<int> v={-1,0,1};
    int  rec(vector<vector<int>>& m,vector<vector<int>> & dp, int i,int j,int n){
        if(i>=n || j>=n || j<0)
        return INT_MAX;

        if(dp[i][j]!=INT_MAX)
        return dp[i][j];

        if(i==n-1)
        return m[i][j];

        int mini=INT_MAX;
        
        for(auto k:v){
           mini=min(mini,rec(m,dp,i+1,j+k,n));
        }
        return dp[i][j]=mini+m[i][j];
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> dp(n,vector<int>(n,INT_MAX));
        int mini=INT_MAX;
        for(int j=0;j<n;j++){
           mini=min(mini,rec(matrix,dp,0,j,n));
        }
        return mini;
    }
};