class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int p=0,n=1;
        int s=nums.size();
        vector<int> ans(s,0);
        for(auto it : nums){
            if( it<0){
                ans[n]=it;
                n+=2;
            }
            if(it>0){
                ans[p] = it;
                p+=2;
            }
        }
        return ans;
    }
};