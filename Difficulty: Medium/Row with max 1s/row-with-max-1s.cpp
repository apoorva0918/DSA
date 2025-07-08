// User function template for C++
class Solution {
  public:
    int firstOcc(vector<int> &arr, int m){
        int low=0;
        int high=m-1;
        int ans=m;
        
        while(low<=high){
            int mid= (low+high)/2;
            if(arr[mid]==1){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    int rowWithMax1s(vector<vector<int>> &arr) {
        int n= arr.size();
        int m= arr[0].size();
        int maxRow=-1;
        int maxCnt=0;
        
        for(int i=0; i<n; i++){
            int index= firstOcc(arr[i],m);
            int cnt= m-index;
            
            if(cnt>maxCnt){
                maxCnt=cnt;
                maxRow=i;
            }
        }
        return maxRow;
        
    }
};