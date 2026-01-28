class Solution {
public:
int m,n;
 string s1,s2,s3;
 vector<vector<int>> dp;
 bool rec(int i,int j){
    if(i==m && j==n )
    return true;

    if(dp[i][j]!=-1)
    return dp[i][j];

    bool t1 = false;
    bool t2 = false;

    if(i< s1.size() && s1[i]==s3[i+j])
    t1= rec(i+1,j);

    if(j< s2.size() && s2[j]==s3[i+j])
    t2=rec(i,j+1);

    return dp[i][j]=t1||t2;
 }
    bool isInterleave(string str1, string str2, string str3) {
        s1=str1,s2=str2,s3=str3;

         m=s1.size();
         n=s2.size();
        if(m+n != s3.size())
        return false;
        dp.assign(m+1,vector<int>(n+1,-1));

        return rec(0,0);
    }
};