class Solution {
public:
    int mySqrt(int x) {
        int low=0;
        int high=x;
        int ans=0;

        while(low<=high){
            long long mid=(low+high)/2;
            long long val=mid*mid;
            if(val<=x){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};