class Solution {
  public:
    string convertToRoman(int n) {
        vector<pair<int,string>>valueSymbol={
            {1000,"M"}, {900,"CM"}, {500,"D"},{400,"CD"},
            {100,"C"}, {90,"XC"}, {50,"L"},{40,"XL"},
            {10,"X"},{9,"IX"},{5,"V"},{4,"IV"}, {1,"I"}
        };
        
        string result="";
        
        for(auto it:valueSymbol){
            while(n>=it.first){
                result+=it.second;
                n-=it.first;
            }
        }
        return result;
        
    }
};