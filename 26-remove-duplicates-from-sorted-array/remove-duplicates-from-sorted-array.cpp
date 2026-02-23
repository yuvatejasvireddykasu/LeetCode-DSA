class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=-1,j=0;
        while(j<n && i< n-1){
            i++;
            nums[i]=nums[j];
            while(j<n && nums[j]==nums[i]){
                j++;
            }
        }
        return i+1;

    }
};