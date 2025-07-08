class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m= mat.size();
        int n= mat[0].size();
        int maxRow=0;
        int maxCnt=0;

        for(int i=0; i<m; i++){
            int cnt=0;
            for(int j=0; j<n; j++){
                if(mat[i][j]==1){
                    cnt++;
                }
                if(cnt>maxCnt){
                    maxCnt=cnt;
                    maxRow=i;
                }
            }
        }
        return {maxRow,maxCnt};
    }
};