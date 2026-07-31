class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        //BFS 
        //ADj  is already given
        int n=adj.size();
        queue<int>q;
        vector<int>ans;
        vector<bool>visited(n,0);
        q.push(0);
        visited[0]=true;
            //pop element from the queue 
            while(!q.empty()){
                int node=q.front();
                q.pop();
                ans.push_back(node);
                //push nbr in queue 
                for(auto nbr:adj[node]){
                    if(visited[nbr]!=true){
                         q.push(nbr);
                         visited[nbr]=true;
                    }
                   
                }
            }
            return ans;
    }
};