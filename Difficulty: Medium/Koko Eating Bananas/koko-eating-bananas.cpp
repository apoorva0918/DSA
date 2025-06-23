class Solution {
  public:
    int maxBanana(vector<int>&arr){
        int maxi=INT_MIN;
        for(int i=0; i<arr.size();i++){
            maxi=max(maxi,arr[i]);
        }
        return maxi;
    }
    
    long long calc(vector<int>&arr, int k){
        long long total=0;
        for(int i=0; i<arr.size(); i++){
            total+= ((long long)arr[i]+k-1)/k;
        }
        return total;
    }
    
    int kokoEat(vector<int>& arr, int k) {
        int low=1;
        int high= maxBanana(arr);
        
        while(low<=high){
            int mid=(low+high)/2;
            long long totalHr=calc(arr,mid);
            if(totalHr<=k){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};