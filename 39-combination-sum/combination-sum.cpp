class Solution {
public:
    vector<vector<int>> ans;
    void rec(vector<int> &c , int ind , int target,int sum,vector<int> temp){
        if(target==sum){
          ans.push_back(temp);
          return;
        }

        if(sum> target || ind==c.size()){
            return;
        }

        temp.push_back(c[ind]);
        rec(c,ind,target,sum+c[ind],temp);
        temp.pop_back();
        rec(c,ind+1,target,sum,temp);


    }
    vector<vector<int>> combinationSum(vector<int>& c, int target) {
        vector<int> temp;
        rec(c,0,target,0,temp);
        return ans;
    }
};