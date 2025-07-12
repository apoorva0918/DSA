class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;

        unordered_map<char,char>stot;
        unordered_map<char,char>ttos;

        for(int i=0; i<s.length();i++){
            char c1= s[i];
            char c2= t[i];

            if(stot.count(c1)){
                if(stot[c1]!=c2){
                    return false;
                }
            }else{
                stot[c1]=c2;
            }

            if(ttos.count(c2)){
                if(ttos[c2]!=c1){
                    return false;
                }
            } else{
                ttos[c2]=c1;
            }
        }
        return true;
        
    }
};