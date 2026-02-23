class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Hash Map : O(N) , O(N)
        // Sort : O(NlogN),O(1)
        //O(N),O(1) : freq(ans)> freq(all_combined)
        int n=nums.size();
        int ans=0;
        int freq=0;
        for(auto it : nums){
            if(freq==0){
                ans=it;
                freq++;
                continue;
            }
            
            if(it==ans)
            freq++;
            else
            freq--;

        }
        return ans;

    }
};