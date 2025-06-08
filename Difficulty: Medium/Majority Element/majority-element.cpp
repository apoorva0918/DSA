// User function template for C++

class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int cnt=0;
        int el=0;
        for(int i=0; i<arr.size();i++){
            if(cnt==0){
                el=arr[i];
                cnt++;
            }
            
            else if(el==arr[i]){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        
        for(int i=0; i<arr.size();i++){
            if(arr[i]==el){
                cnt++;
            }
        }
        
        return (cnt > (arr.size()/2)) ? el : -1;
        
    }
};