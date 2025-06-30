// User function Template for C++

class Solution {
  public:
  
    bool canPlace(vector<int> &stalls, int k, int cow){
        int cntCows=1;
        int last= stalls[0];
        
        for(int i=1; i<stalls.size(); i++){
            if(stalls[i]-last>=k){
                cntCows++;
                last=stalls[i];
            }
            if(cntCows>=cow){
                return true;
            }
        }
        return false;
    }

    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(),stalls.end());
        
        int n= stalls.size();
        
        int low=1;
        int high= stalls[n-1]-stalls[0];
        
        while(low<=high){
            int mid= (low+high)/2;
            if(canPlace(stalls,mid,k)==true){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;
    }
};