// User function Template for C++

class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        int i1=-1;
        int n= arr.size();
        
        for(int i=n-2; i>=0; i--){
            if(arr[i] < arr[i+1]){
                i1=i;
                break;
            }
        }
        
        if(i1==-1){
            reverse(arr.begin(),arr.end());
            return;
        }
        
        for(int i= n-1;  i> i1; i--){
            if(arr[i] > arr[i1]){
                swap(arr[i],arr[i1]);
                break;
            }
        }
        
        reverse(arr.begin()+i1+1, arr.end());
        
    }
};