

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        
        int n= arr.size();
        int max= arr[n-1];
        vector<int>ans;
        ans.push_back(arr[n-1]);
        
        for(int i=n-2; i>=0; i--){
            if(arr[i]>=max){
                max=arr[i];
                ans.push_back(arr[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};