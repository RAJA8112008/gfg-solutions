class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
      int first=-1;   //{10,10,10,10,10}
         int second=-1;
         for(int i=0;i<arr.size();i++){
             if(arr[i]>first){
                 second=first;
                 first=arr[i];
             }else if(arr[i]>second && first>arr[i]){
                 second=arr[i];
             }
         }
         return second;
     }
};