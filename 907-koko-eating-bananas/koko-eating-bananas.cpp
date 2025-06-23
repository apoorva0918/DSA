class Solution {
public:
    int maxBanana(vector<int>&piles){
        int maxi=INT_MIN;
        for(int i=0; i<piles.size();i++){
            maxi=max(maxi,piles[i]);
        }
        return maxi;
    }
    long long calc(vector<int>&piles, int k){
        long long ans=0;
        for(int i=0; i<piles.size();i++){
            ans+= ((long long)piles[i]+k-1)/k;
        }
        return ans;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high= maxBanana(piles);
        while(low<=high){
            int mid=(low+high)/2;
            long long totalHrs= calc(piles,mid);
            if(totalHrs<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};