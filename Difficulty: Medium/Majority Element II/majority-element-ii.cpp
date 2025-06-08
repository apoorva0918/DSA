class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        int cnt1=0;
        int cnt2=0;
        
        int el1=0;
        int el2=1;
        
        for(int num : arr){
            if(num==el1){
                cnt1++;
            }
            else if(num==el2){
                cnt2++;
            }
            else if(cnt1==0){
                el1=num;
            }
            else if(cnt2==0){
                el2=num;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        
        cnt1=0;
        cnt2=0;
        
        for(int num : arr){
            if(num==el1){
                cnt1++;
            }
            else if(num==el2){
                cnt2++;
            }
        }
        
        vector<int>res;
        if(cnt1 > arr.size()/3){
            res.push_back(el1);
        }
        if(cnt2 > arr.size()/3){
            res.push_back(el2);
        }
        
        sort(res.begin(),res.end());
        return res;
    }
};