// User function template for C++

class Solution {
  public:
    int upperBound(vector<int> &mat, int x, int n){
        int low=0;
        int high=n-1;
        int ans=n;
        while(low<=high){
            int mid=(high+low)/2;
            if(mat[mid]>x){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    int count(vector<vector<int>> &mat, int mid, int n, int m){
        int cnt=0;
        for(int i=0; i<n; i++){
            cnt+= upperBound(mat[i],mid,m);
        }
        return cnt;
    }
    int median(vector<vector<int>> &mat) {
        int n=mat.size();
        int m= mat[0].size();
        
        int req= (n*m)/2;
        
        int low=INT_MAX;
        int high=INT_MIN;
        
        for(int i=0; i<n; i++){
            low= min(low,mat[i][0]);
            high=max(high,mat[i][m-1]);
        }
        while(low<=high){
            int mid= (low+high)/2;
            int smaller=count(mat,mid,n,m);
            if(smaller <= req){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};
