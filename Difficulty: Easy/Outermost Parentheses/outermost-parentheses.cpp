class Solution {
  public:
    string removeOuter(string& s) {
        int cnt=0;
        string result="";
        
        for(char c : s){
            if(c=='('){
                if(cnt>0){
                    result+=c;
                }
                cnt++;
            }
            else{
                cnt--;
                if(cnt>0) result+=c;
            }
        }
        return result;
        
        
    }
};