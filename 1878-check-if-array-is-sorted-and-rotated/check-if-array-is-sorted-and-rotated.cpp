class Solution {
public:
    bool check(vector<int>& nums) {
       nums.push_back(nums[0]);
       int c=0;
       for(int i=0;i<nums.size()-1;i++){
          if(nums[i]>nums[i+1])
          c++;
       }
       return c>1 ? false : true;
    }
};