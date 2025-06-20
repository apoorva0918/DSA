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
    
    
    vector<int> find(vector<int>& arr, int x) {
        int first= firstOcc(arr,x);
        int second= secondOcc(arr,x);
        return {first,second};
        
    }
};