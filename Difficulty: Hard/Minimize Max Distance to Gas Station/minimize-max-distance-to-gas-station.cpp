class Solution {
  public:
    int count(vector<int> &arr, long double dist){
        int n= arr.size();
        int cnt=0;
        for(int i=1; i<n; i++){
            int numberInBetween= ((arr[i]-arr[i-1])/dist);
            if ((arr[i] - arr[i - 1]) == (dist * numberInBetween)) {
                numberInBetween--;
            }
            cnt += numberInBetween;
        }
        return cnt;
    }
    double findSmallestMaxDist(vector<int> &stations, int k) {
        int n= stations.size();
        long double low=0;
        long double high=0;
        
        for(int i=0; i<n-1; i++){
            high= max(high, (long double)(stations[i+1]-stations[i]));
        }
        
        long double diff= 1e-6;
        while(high-low> diff){
            long double mid= (high+low)/2.0;
            
            int cnt= count(stations,mid);
            if(cnt>k){
                low=mid;
            }
            else{
                high=mid;
            }
        }
        return high;
    }
};