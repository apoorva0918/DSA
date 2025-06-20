class Solution {
public:
    int firstOcc(vector<int> &nums, int target){
        int res=-1;
        int low=0;
        int high=nums.size()-1;
        
        while(low<=high){
            int mid= (low+high)/2;
            if(nums[mid]==target){
                res=mid;
                high=mid-1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return res;
    }

    int secondOcc(vector<int> &nums, int target){
        int res=-1;
        int low=0;
        int high=nums.size()-1;
        
        while(low<=high){
            int mid= (low+high)/2;
            if(nums[mid]==target){
                res=mid;
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return res;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first= firstOcc(nums,target);
        int second= secondOcc(nums,target);
        return {first,second};
    }
};