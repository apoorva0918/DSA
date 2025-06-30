class Solution {
  public:
    int count(vector<int> &arr,int mid){
        int student=1;
        int pages= 0;
        for(int i=0; i<arr.size(); i++){
            if(pages+arr[i]<=mid){
                pages+=arr[i];
            }
            else{
                student++;
                pages= arr[i];
            }
        }
        return student;
    }
    int findPages(vector<int> &arr, int k) {
        int n= arr.size();
        if(k>n) return -1;
        
        int maxi= *max_element(arr.begin(),arr.end());
        int sum = accumulate(arr.begin(),arr.end(),0);
        
        int low= maxi;
        int high= sum;
        
        while(low<=high){
            int mid= (low+high)/2;
            int students= count(arr,mid);
            if(students > k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};