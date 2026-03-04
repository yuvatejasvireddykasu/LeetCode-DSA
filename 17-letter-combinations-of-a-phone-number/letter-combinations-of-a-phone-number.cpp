class Solution {
public:

    void rec(string d,int i,unordered_map<int,string> m,vector<string>&ans,string s){
        if(i==d.size()){
           ans.push_back(s);
           return;
        }
        string x=m[d[i]-'0'];
        for(int j=0;j<x.size();j++){
            s.push_back(x[j]);
            rec(d,i+1,m,ans,s);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<int,string> m;
        m[2]="abc";
        m[3]="def";
        m[4]="ghi";
        m[5]="jkl";
        m[6]="mno";
        m[7]="pqrs";
        m[8]="tuv";
        m[9]="wxyz";
        string s="";
        vector<string> ans;
        rec(digits,0,m,ans,s);
        return ans;
    }
};