class Solution {
public:
    int m, n;
    string s1,s2;
    vector<vector<int>> dp;
    int rec(int i,int j){

        if(j>=n)
        return m-i; // delete

        if(i>=m)
        return n-j; //add

        if(dp[i][j]!=-1)
        return dp[i][j];

        if(s1[i]==s2[j])
        return dp[i][j]=rec(i+1,j+1);

        int rep = 1+rec(i+1,j+1);
        int del= 1 + rec(i+1,j);
        int ins = 1+ rec(i,j+1);

        return dp[i][j] = min({rep,del,ins});
    }
    int minDistance(string word1, string word2) {
        m=word1.size();
        n=word2.size();
        s1=word1,s2=word2;
        dp.assign(m,vector<int>(n,-1));
        return rec(0,0);
    }
};