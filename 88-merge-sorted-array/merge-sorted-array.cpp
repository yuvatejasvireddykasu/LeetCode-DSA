class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l=0;
        int p=0;
        vector<int> newV;
        while(l<m && p<n){
          if(nums1[l]<nums2[p]){
            newV.push_back(nums1[l]);
            l++;
          }
          else
        {
            newV.push_back(nums2[p]);
            p++;
        }
        }
        while(l<m){
            newV.push_back(nums1[l]);
            l++;
        }
        while(p<n){
            newV.push_back(nums2[p]);
            p++ ;
        }
        nums1=newV;
    }
};