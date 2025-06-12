class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans;
        long long el=1;
        ans.push_back(el);

        for(int i=1; i<=rowIndex; i++){
            el= el*(rowIndex-i+1);
            el=el/i;
            ans.push_back(el);
        }
        return ans;
    }
};