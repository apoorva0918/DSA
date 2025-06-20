class Solution {
  public:
    int firstOcc(int x, vector<int> &arr){
        int low=0;
        int high=arr.size()-1;
        int res=-1;
        
        while(low<=high){
            int mid=(low+high)/2;
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
    
    int secondOcc(int x, vector<int> &arr){
        int low=0;
        int high=arr.size()-1;
        int res=-1;
        
        while(low<=high){
            int mid=(low+high)/2;
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
    
    vector<int> firstAndLast(int x, vector<int> &arr) {
        int first=firstOcc(x,arr);
        int second= secondOcc(x,arr);
        if(first==-1){
            return {-1};
        }
        return {first,second};
        
    }
};