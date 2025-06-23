class Solution {
  public:
    int func(int mid, int n, int m){
        long long ans=1;
        
        for(int i=1; i<=n; i++){
            ans=ans*mid;
            if(ans>m) return 2;
        }
        if(ans==m) return 1;
        return 0;
    }
    int nthRoot(int n, int m) {
        int low=1;
        int high=m;
        while(low<=high){
            int mid=(low+high)/2;
            int midF= func(mid,n,m);
            if(midF==1){
                return mid;
            } 
            else if(midF==0) low=mid+1;
            else high=mid-1;
        }
        return -1;
    }
};