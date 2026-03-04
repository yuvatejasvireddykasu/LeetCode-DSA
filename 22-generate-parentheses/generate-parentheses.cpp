class Solution {
public:
    vector<string> ans;
    void rec(int n,unordered_map<char,int> m , string s, int ind){
        if(ind==2*n){
            ans.push_back(s);
            return;
        }

        //'(
        if(m['(']>0){
            s.push_back('(');
            m['(']--;
            rec(n,m,s,ind+1);
            s.pop_back();
            m['(']++;
        }    

        if(m[')']>0 && m['(']< m[')']){
             s.push_back(')');
            m[')']--;
            rec(n,m,s,ind+1);
            s.pop_back();
            m[')']++;

        }
    }
    vector<string> generateParenthesis(int n) {
        string s= "(";
        unordered_map<char,int> m;
        m['('] = n-1;
        m[')'] = n;
        rec(n,m,s,1);
        return ans;
    }
};