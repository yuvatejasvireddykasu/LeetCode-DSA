class Solution {
public:
    int m,n;
    string s1,t1;
    vector<vector<int>> dp;
    int rec(int i,int j){

      if(j==n)
      return 1;
      if(i==m )
      return 0;

     

      if(dp[i][j]!=-1)
      return dp[i][j];

      int ans=rec(i+1,j);
      if(s1[i]==t1[j])
      ans+=rec(i+1,j+1);

      
      return dp[i][j]=ans;
    }
    int numDistinct(string s, string t) {
        if(t.size()>s.size())
        return 0;

        m=s.size();
        n=t.size();
        s1=s,t1=t;
        vector<vector<int>> dp1(m,vector<int>(n,-1));
        dp=dp1;

        return rec(0,0);


    }
};