class Solution {
public:
    int count(vector<int>& nums, int k){
        int part=1;
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            if(sum+nums[i]<=k){
                sum+=nums[i];
            }
            else{
                part++;
                sum= nums[i];
            }
        }
        return part;
    } 
    int splitArray(vector<int>& nums, int k) {
        int low= *max_element(nums.begin(),nums.end());
        int high= accumulate(nums.begin(),nums.end(),0);

        while(low<=high){
            int mid= (low+high)/2;
            int partitions= count(nums,mid);
            if(partitions > k){
                low=mid+1;
            }
            else{
                high= mid-1;
            }
        }
        return low;
    }
};