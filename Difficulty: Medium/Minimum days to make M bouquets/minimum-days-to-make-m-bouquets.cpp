class Solution {
  public:
    bool possible(vector<int> arr,int mid, int m, int k){
        int cnt=0;
        int noOfB=0;
        
        for(int i=0; i< arr.size(); i++){
            if(arr[i]<=mid){
                cnt++;
            }
            else{
                noOfB+= cnt/k;
                cnt=0;
            }
        }
        noOfB+= cnt/k;
        return noOfB >=m;
    }
  
    int minDaysBloom(int m, int k, vector<int> &arr) {
        long long val= m * 1LL * k * 1LL;
        int n= arr.size();
        if(val>n){
            return -1;
        }
        int mini=INT_MAX;
        int maxi= INT_MIN;
        
        for(int i=0; i<n ; i++){
            mini= min(arr[i],mini);
            maxi= max(arr[i], maxi);
        }
        
        int low=mini;
        int high=maxi;
        
        while(low<=high){
            int mid= (low+high)/2;
            if(possible(arr,mid,m,k)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};