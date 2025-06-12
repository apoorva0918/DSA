
class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        vector<int> ans;
        long long el=1;
        ans.push_back(el);
        
        for(int i=1; i<n; i++){
            el= el*(n-i);
            el=el/i;
            ans.push_back(el);
        }
        return ans;
    }
};
