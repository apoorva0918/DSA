class Solution {
  public:
    int divisor(vector<int> &arr, int k){
        int sum=0;
        for(int i=0; i<arr.size(); i++){
            sum+= ceil((double)arr[i]/(double)k);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& arr, int k) {
        int low=1;
        int high= *max_element(arr.begin(),arr.end());
        
        while(low<=high){
            int mid= (low+high)/2;
            if(divisor(arr,mid)<=k){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
