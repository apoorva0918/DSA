class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i1=-1;
        int n= nums.size();

        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                i1=i;
                break;
            }
        }

        if(i1==-1){
            reverse(nums.begin(),nums.end());
            return;
        }

        for(int i=n-1; i>i1; i--){
            if(nums[i]>nums[i1]){
                swap(nums[i],nums[i1]);
                break;
            }
        }

        reverse(nums.begin()+i1+1, nums.end());

        
    }
};