class Solution {
public:
    vector<int> sum1,sum2;
    vector<vector<int>> dp;
    int m,n;
    string str1,str2;
    int rec(int i,int j){
        if(i<0 && j<0)
        return 0;

        if(i<0)
        return sum2[j];

        if(j<0)
        return sum1[i];

        if(dp[i][j]!=-1)
        return dp[i][j];

        if(str1[i]==str2[j])
        return dp[i][j]=rec(i-1,j-1);

        return dp[i][j]=min(str1[i]+rec(i-1,j), str2[j]+rec(i,j-1));
    }
    int minimumDeleteSum(string s1, string s2) {
      m=s1.size();
      n=s2.size();
      sum1.assign(m,0);
      sum2.assign(n,0);
      dp.assign(m,vector<int>(n,-1));
      str1=s1,str2=s2;
      int p=0;
      sum1[0]=s1[0];
      sum2[0]=s2[0];
      for(int i=1;i<m;i++){
        sum1[i]=sum1[i-1]+s1[i];
      }

      for(int i=1;i<n;i++){
        sum2[i]=sum2[i-1]+s2[i];
      }

      return rec(m-1,n-1);
    }
};