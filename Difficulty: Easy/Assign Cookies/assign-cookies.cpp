class Solution {
  public:
    int maxChildren(vector<int> &greed, vector<int> &cookie) {
        // code here
        int n=greed.size();
        int m=cookie.size();
        
        sort(greed.begin(),greed.end());
        sort(cookie.begin(),cookie.end());
        
        int l=0;
        int r=0;
        
        while(l<n && r<m){
            if(greed[l]<=cookie[r]){
                l++;
            }
            r++;
        }
        return l;
    }
};