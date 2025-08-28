class Solution {
  public:
    bool canServe(vector<int> &arr) {
        // code here
        int five=0;
        int ten=0;
        
        for(int i=0; i<arr.size();i++){
            if(arr[i]==5){
                five++;
            }
            else if(arr[i]==10){
                if(five){
                    five--;
                    ten++;
                }
                else{
                    return false;
                }
            }
            else{
                if(five && ten){
                    five--;
                    ten--;
                }
                else if(five>=3){
                    five-=3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};