class Solution {
public:
    void dfs(vector<int> adj[],vector<int> &v,int i,int p,int &c)
     {
         v[i]=p;
         c++;
         for(auto it :adj[i])
         {
             if(v[it]==-1)
             {
                 dfs(adj,v,it,p,c);
             }
         }
     }
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<int> adj[n];
        vector<int> v(n,-1);
        unordered_map<int,int> m;
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }

        for(int i=0;i<n;i++){
            if(v[i]==-1){
                int c=0;
               dfs(adj,v,i,i,c); 
               m[i]=c;    
            }
        }
        int ans = m.size();
        for(int i=0;i<n;i++){
           int par=v[i];
           if(m[par]==-1)
           continue;

           if(adj[i].size()!= m[par]-1){
            ans--;
            m[par] =-1;
           }
        }
        return ans;
    }
};