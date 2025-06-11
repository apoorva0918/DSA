
class Solution {
  public:
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& mat) {
        int n= mat.size();
        int m= mat[0].size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<m ;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        
        for(int j=0; j<m; j++){
            int top=0; int bottom=n-1;
            while(top<bottom){
                swap(mat[top][j],mat[bottom][j]);
                top++;
                bottom--;
            }
        }
        
    }
};
