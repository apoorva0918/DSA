class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        vector<int>ans;
        unordered_map<int,vector<int>>pre;
        int n= arr.size();
        int sum=0;
        
        pre[0]={-1}; 
        
        for(int i=0; i<n; i++){
            sum+=arr[i];
            
            int rem= sum-target;
            
            if(pre.find(rem)!=pre.end()){
                for(int start: pre[rem]){
                    ans.push_back(start+2);
                    ans.push_back(i+1);
                    return ans;
                }
            }
            pre[sum].push_back(i);
        }
        return {-1};
    }
};