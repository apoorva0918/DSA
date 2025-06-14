/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr) {
        int sum=0;
        int n= arr.size();
        int maxLen=0;
        unordered_map<int,int>mpp;
        
        for(int i=0; i<n; i++){
            sum+=arr[i];
            if(sum==0){
                maxLen=i+1;
            }
            else if(mpp.find(sum)!=mpp.end()){
                maxLen=max(maxLen,i-mpp[sum]);
            }
            else{
                mpp[sum]=i;
            }
        }
        return maxLen;
    }
};