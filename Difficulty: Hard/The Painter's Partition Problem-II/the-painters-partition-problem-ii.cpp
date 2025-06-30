// User function template for C++

class Solution {
  public:
    int count(vector<int>& arr, int k){
        int painters=1;
        int ttime=0;
        for(int i=0; i<arr.size(); i++){
            if(ttime+arr[i]<=k){
                ttime+=arr[i];
            }
            else{
                painters++;
                ttime=arr[i];
            }
        }
        return painters;
    }
    int minTime(vector<int>& arr, int k) {
        int low= *max_element(arr.begin(),arr.end());
        int high= accumulate(arr.begin(),arr.end(),0);
        
        while(low<=high){
            int mid= (low+high)/2;
            int painters= count(arr,mid);
            if(painters>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};