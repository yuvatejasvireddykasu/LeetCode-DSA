class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            if(c>0 && nums[i]!=0)
            return false;
            
            if(nums[i]==0)
            c--;
            else
            c=k;
        }
        return true;
    }
};