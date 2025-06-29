// User function Template for C++

class Solution {
  public:
    int possible(int arr[],int n, int k){
        int days=1;
        int load=0;
        for(int i=0; i<n;i++){
            if(load+arr[i]>k){
                days+=1;
                load=arr[i];
            }
            else{
                load+=arr[i];
            }
        }
        return days;
    }
    int leastWeightCapacity(int arr[], int n, int d) {
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=arr[i];
            maxi=max(arr[i],maxi);
        }
        int low=maxi;
        int high= sum;
        while(low<=high){
            int mid= (low+high)/2;
            if(possible(arr,n,mid)<=d){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};