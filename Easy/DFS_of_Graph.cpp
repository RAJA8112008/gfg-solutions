class Solution {
  public:
   void dfs(int idx,vector<vector<int>>& adj,vector<bool>&visited,vector<int>&ans){
       //visited idx 
      
       visited[idx]=true;
         ans.push_back(idx);
       // nbr 
       for(auto nbr:adj[idx]){
           if(visited[nbr]!=true){
               //dfs call 
               dfs(nbr,adj,visited,ans);
           }
       }
   }
    vector<int> dfs(vector<vector<int>>& adj) {
       vector<int>ans;
       int n=adj.size();
       vector<bool>visited(n,false);
       //adj list  is given 
       for(int i=0;i<n;i++){
           if(visited[i]!=true){
               dfs(i,adj,visited,ans);
           }
       }
       return ans;
    }
};