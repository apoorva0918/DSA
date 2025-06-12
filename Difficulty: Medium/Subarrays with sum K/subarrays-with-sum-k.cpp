// User function Template for C++

class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        int n= arr.size();
        
        unordered_map<int,int> pre;
        int sum=0;
        int cnt=0;
        pre[0]=1;
        
        for(int i=0; i<n; i++){
            sum+=arr[i];
            
            int rem= sum-k;
            
            if(pre.find(rem)!=pre.end()){
                cnt+=pre[rem];
            }
            
            pre[sum]++;
        }
        return cnt;
        
    }
};