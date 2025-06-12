class Solution {
public:
    vector<int>generateRows(int row){
        vector<int>ans;
        int el=1;
        ans.push_back(el);

        for(int col=1; col<row; col++){
            el=el*(row-col);
            el=el/col;
            ans.push_back(el);
        }
        return ans;

    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        
        for(int row=1; row<=numRows; row++){
            ans.push_back(generateRows(row));
        }
        return ans;
    }
};