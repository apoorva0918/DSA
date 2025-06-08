class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate=-1;
        int count=0;

        for(int num : nums){
            if(count==0){
                candidate=num;
                count++;
            }
            else if(num==candidate){
                count++;
            }
            else{
                count--;
            }
        }

        count=0;
        for(int num: nums){
            if(num==candidate){
                count++;
            }
        }
        return count>nums.size()/2? candidate:-1;
    }
};