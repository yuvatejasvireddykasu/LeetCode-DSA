class Solution {
public:
    vector<vector<string>> res;
    bool checkd(int ti,int tj,int n,vector<string> &ans){
      int i=ti,j=tj;
        // i+!,j+!
        while(i<n && j<n){
          if(ans[i][j] == 'Q'){
            return false;
          }
          i++;
          j++;
        }
 i=ti;j=tj;
         // i+!,j+!
        while(i<n && j>=0){
          if(ans[i][j] == 'Q'){
            return false;
          }
          i++;
          j--;
        }
 i=ti;j=tj;
         // i+!,j+!
        while(i>=0 && j>=0){
            cout<<i<<" "<<j<<endl;
          if(ans[i][j] == 'Q'){
            return false;
          }
          i--;
          j--;
        }
 i=ti;j=tj;
         // i+!,j+!
        while(i>=0 && j<n){
          if(ans[i][j] == 'Q'){
            return false;
          }
          i--;
          j++;
        }
        return true;
    }
    void rec(int ind,vector<string> ans, int n,set<int> hor){
        if(ind==n){
            res.push_back(ans);
            return;
        }

            for(int j=0;j<n;j++){

                if(hor.find(j)==hor.end() && checkd(ind,j,n,ans)){
                    ans[ind][j]='Q';
                    hor.insert(j);
                    rec(ind+1,ans,n,hor);
                    ans[ind][j]='.';
                    hor.erase(j);
                }

        }
        
    }
    vector<vector<string>> solveNQueens(int n) {
        string s;
        for(int i=0;i<n;i++){
          s.push_back('.');
        }
       vector<string> ans(n,s);
       set<int> h;
       rec(0,ans,n,h);
       return res;

    }
};