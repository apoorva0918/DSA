class Solution {
  public:
    int findMin(int n) {
        int ans=0;
        // code here
        int arr[]={1,2,5,10};
        int m=4;
        for(int i=m-1; i>=0; i--){
            while(n>=arr[i]){
                n-=arr[i];
                ans++;
            }
        }
        return ans;
    }
};