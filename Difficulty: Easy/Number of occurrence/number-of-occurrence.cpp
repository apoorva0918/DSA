class Solution {
  public:
    int firstOcc(vector<int> &arr, int x){
        int n= arr.size();
        int low=0;
        int high= n-1;
        int res=-1;
        while(low<=high){
            int mid= (low+high)/2;
            if(arr[mid]==x){
                res=mid;
                high=mid-1;
            }
            else if(arr[mid]>x){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return res;
    }
    
    int secondOcc(vector<int> &arr, int x){
        int n= arr.size();
        int low=0;
        int high= n-1;
        int res=-1;
        while(low<=high){
            int mid= (low+high)/2;
            if(arr[mid]==x){
                res=mid;
                low=mid+1;
            }
            else if(arr[mid]>x){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return res;
    }
    int countFreq(vector<int>& arr, int target) {
        int first=firstOcc(arr,target);
        if(first==-1) return 0;
        int second= secondOcc(arr,target);
        return second-first+1;
        
    }
};
