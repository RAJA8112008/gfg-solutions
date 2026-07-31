class Solution {
  public:
  void dfs(int idx,vector<bool>&visited,unordered_map<int,vector<int>>&adj){
      visited[idx]=true;
      //find its adj 
      for(auto nbr:adj[idx]){
          if(visited[nbr]!=true){
              dfs(nbr,visited,adj);
          }
      }
  }
    int countConnected(int V, vector<vector<int>>& edges) {
       //using DFS 
       //createv an adj list 
       int n=edges.size();
       unordered_map<int,vector<int>>adj(V);
       for(int i=0;i<edges.size();i++){
           int u=edges[i][0];
           int v=edges[i][1];
           //undirected graph 
           adj[u].push_back(v);
           adj[v].push_back(u);
       }
       vector<bool>visited(V,false);
       int count=0;
       //call DFS for each component
        for(int i=0;i<V;i++){
            //dfs call 
            if(visited[i]!=true){
                 dfs(i,visited,adj);
                 count++;
            }
            
        }
        return count;
    }
};