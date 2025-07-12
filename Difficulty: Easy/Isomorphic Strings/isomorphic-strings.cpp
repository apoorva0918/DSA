class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        if(s1.length()!=s2.length()) return false;
        
        unordered_map<char,char>s1tos2;
        unordered_map<char,char>s2tos1;
        
        for(int i=0; i<s1.length();i++){
            char ch1= s1[i];
            char ch2= s2[i];
            if(s1tos2.count(ch1)){
                if(s1tos2[ch1]!=ch2){
                    return false;
                }
            } else{
                s1tos2[ch1]=ch2;
            }
            
            if(s2tos1.count(ch2)){
                if(s2tos1[ch2]!=ch1){
                    return false;
                }
            }
            else{
                s2tos1[ch2]=ch1;
            }
        }
        return true;
        
    }
};