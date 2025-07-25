// User function Template for C++

class Solution {
  public:
    int searchInsertK(vector<int> Arr, int N, int k) {
        int low=0;
        int high=N-1;
        int ans=N;
        
        while(low<=high){
            int mid= (low+high)/2;
            if(Arr[mid]>=k){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};