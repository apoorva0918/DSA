class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        int n=arr.size();
        int cnt=0;
        unordered_map<int,int>mpp;
        int xr=0;
        mpp[xr]++;
        
        for(int i=0; i<n; i++){
            xr^=arr[i];
            
            int x= xr^k;
            
            cnt+= mpp[x];
            
            mpp[xr]++;
        }
        return cnt;
        
    }
};