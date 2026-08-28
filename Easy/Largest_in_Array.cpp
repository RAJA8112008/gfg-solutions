class Solution {
  public:
    int largest(vector<int> &arr) {
        int maxi=0;
       for(int i=1;i<arr.size();i++){
           if(arr[i-1]<arr[i]){
               maxi=max(arr[i],maxi);
           }else{
               maxi=max(arr[i-1],maxi);
           }
       }
       return maxi;
    }
};