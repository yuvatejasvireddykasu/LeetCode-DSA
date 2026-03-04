class Solution {
public:
    vector<vector<int>> ans;
    void rec(vector<int> &nums ,vector<int> temp,set<int> s){
        if(temp.size()==nums.size()){
            ans.push_back(temp);
            return;
        }

        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i])==s.end()){
                temp.push_back(nums[i]);
                s.insert(nums[i]);
                rec(nums,temp,s);
                temp.pop_back();
                s.erase(nums[i]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        set<int> s;
        vector<int> temp;
        rec(nums,temp,s);
        return ans;
    }
};