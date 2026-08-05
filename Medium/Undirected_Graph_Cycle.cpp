class Solution {
  public:
    bool isCycle(int V, vector<vector<int>>& edges) {
      //create an adj List 
      unordered_map<int,vector<int>>adj(V);
      for(int i=0;i<edges.size();i++){
          int u=edges[i][0];
          int v=edges[i][1];
          //ubdirected graph 
          adj[u].push_back(v);
          adj[v].push_back(u);
      }
      //to track node is visited or no t
      vector<bool>visited(V,false);
      //to track the parent node
      vector<int>parent(V);
      //To perform BFS 
      queue<int>q;
      //push each node 
      for(int i=0;i<V;i++){
          //if node is not vitsre 
          if(!visited[i]){
              visited[i]=true;
              parent[i]=-1;
              q.push(i);
              //perform BFS 
              while(!q.empty()){
                  int node=q.front();
                  q.pop();
                  //travers eon its nbr 
                  for(auto nbr:adj[node]){
                      if(!visited[nbr]){
                          //mark is visited 
                          visited[nbr]=true;
                          parent[nbr]=node;
                          q.push(nbr);
                      }else{
                          //node is already visited 
                          if(parent[node]!=nbr){
                              return true;
                          }
                      }
                  }
              }
              
          }
          
      }
      return false;
        
    }
};