class Solution {
public:
    bool dfs(int node,int color,vector<int> &v,vector<vector<int>>& graph){
        v[node]=color;
        for(int i=0;i<graph[node].size();i++){
            if(v[graph[node][i]] == -1 ){
               if(dfs(graph[node][i],!color,v,graph)==false)
               return false;
            }
            if(v[graph[node][i]] == color)
            return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> v(n,-1);
        for(int i=0;i<n;i++){
            if(v[i]==-1){
                if(dfs(i,0,v,graph)==false)
                return false;
            }
        }
        return true;
    }
};