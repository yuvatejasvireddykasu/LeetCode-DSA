class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n=bits.size();
        int l=0;
        while(l<n-1){
           if(bits[l]==0)
           {
            l++;
           }
           else
           {
            l=l+2;
           }
        }
        return l==n-1;
       
    }
};