class Solution {
  public:
    int count(vector<int>& arr, int k){
        int parts=1;
        int sum=0;
        for(int i=0; i<arr.size();i++){
            if(sum+arr[i]>k){
                parts++;
                sum=arr[i];
            }
            else{
                sum+=arr[i];
            }
        }
        return parts;
    }
    int splitArray(vector<int>& arr, int k) {
        int low= *max_element(arr.begin(),arr.end());
        int high= accumulate(arr.begin(), arr.end(),0);
        
        while(low<=high){
            int mid= (low+high)/2;
            int parts= count(arr,mid);
            if(parts>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};