class Solution {
public:
    int m ,n;
    vector<vector<int>> dp;
    int rec(string &t1,string &t2,int i , int j){
        if(i==t1.size() || j==t2.size()){
            return 0;
        }

        if(dp[i][j]!=-1)
        return dp[i][j];

        if(t1[i]==t2[j])
        return dp[i][j]=1+rec(t1,t2,i+1,j+1);

        return dp[i][j]=max(rec(t1,t2,i+1,j),rec(t1,t2,i,j+1));

    }
    int longestCommonSubsequence(string text1, string text2) {
         m=text1.size();
         n=text2.size();
         
        vector<vector<int>> dp1(m,vector<int>(n,-1));
        dp=dp1;
        return rec(text1,text2,0,0);
    }
};