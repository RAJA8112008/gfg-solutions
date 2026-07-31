class Solution {
  public:
  
void dfs(int idx,unordered_map<int,vector<int>>&adj,
  vector<bool>&visited,vector<int>&temp){
       //visited first
       visited[idx]=true;
       temp.push_back(idx);
       //adj call 
       for(auto nbr:adj[idx]){
           if(!visited[nbr]){
               dfs(nbr,adj,visited,temp);
           }
       }
  }
    vector<vector<int>> getComponents(int V, vector<vector<int>>& edges) {
      vector<vector<int>>ans;
        //DFS 
        //create adjlist 
        unordered_map<int,vector<int>>adj(V);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            //undirected graph
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        //DFS Call 
        vector<bool>visited(V,false);
        for(int i=0;i<V;i++){
           vector<int>temp;
            if(visited[i]!=true){
                dfs(i,adj,visited,temp);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};