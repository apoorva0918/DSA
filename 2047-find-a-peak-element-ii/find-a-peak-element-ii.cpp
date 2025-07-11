class Solution {
public:
    int maxEle (vector<vector<int>>& mat, int mid, int n, int m){
        int maxElement=-1;
        int index=-1;
        for(int i=0; i<n; i++){
            if(mat[i][mid]>maxElement){
                maxElement=mat[i][mid];
                index=i;
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n= mat.size();
        int m= mat[0].size();
        vector<pair<int,int>>ans;

        int low=0;
        int high= m-1;

        while(low<=high){
            int mid= (high+low)/2;
            int row= maxEle(mat,mid,n,m);

            int left= mid-1 >=0 ? mat[row][mid-1] : -1;
            int right= mid+1<m ? mat[row][mid+1] : -1;

            if(mat[row][mid]>left && mat[row][mid]>right){
                return {row,mid};
            }
            else if(mat[row][mid]<left){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return {-1,-1};
    }
};