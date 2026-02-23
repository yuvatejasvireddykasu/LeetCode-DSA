class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=-1;
        int j=0;
        int n=nums.size();
        while(j<n && i<n-1){
            while(j<n && nums[j]==0){
                j++;
            }
            
            if(j<n){
                i++;
                nums[i]=nums[j];
                j++;
            }
        }
        
        while(++i < n ){
            nums[i]=0;
        }
    }
};