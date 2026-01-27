class Solution {
public:
    string s,t;
    int n;
    vector<vector<int>> dp;
    int rec(int i,int j){
        if(i==n || j==n)
        return 0;

        if(dp[i][j]!=-1)
        return dp[i][j];

        if(s[i]==t[j])
        return 1+rec(i+1,j+1);

        return dp[i][j]= max(rec(i+1,j),rec(i,j+1));
    }
    int longestPalindromeSubseq(string s1) {
        s=s1;
        t= s;
        reverse(t.begin(),t.end());
        n=s.size();
        vector<vector<int>> dp1(n,vector<int>(n,-1));
        dp=dp1;
        return rec(0,0);
    }
};