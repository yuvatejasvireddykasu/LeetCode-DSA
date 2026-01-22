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
        int f=1,s=2;
        for(int i=3;i<=n;i++){
           s=s+f;
           f=s-f;
        }
        return s;
    }
};