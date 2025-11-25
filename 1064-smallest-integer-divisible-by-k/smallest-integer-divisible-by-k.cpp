class Solution {
public:
    int smallestRepunitDivByK(int k) {
      int r =0;
      if(k%2==0 || k%5==0)
      return -1;
      for(int i=0;i<k;i++){
          r = (r*10+1)%k;
          if(r==0)
          return i+1;
      }
      return -1;
    }
};