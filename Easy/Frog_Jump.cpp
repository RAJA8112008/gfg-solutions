class Solution {
  public:
  int solve(int i,vector<int>&height,vector<int>&dp){
      //base case 
      if(i==height.size()-1)return 0;
      if(dp[i]!=-1)return dp[i];
      int onestep=abs(height[i]-height[i+1])+solve(i+1,height,dp);
      int twostep=INT_MAX;
      if(i+2<height.size()){
          twostep=abs(height[i]-height[i+2])+solve(i+2,height,dp);
      }
      return dp[i]= min(onestep,twostep);
  }
    int minCost(vector<int>& height) {
        // Code here
        vector<int>dp(height.size(),-1);
        return solve(0,height,dp);
    }
};