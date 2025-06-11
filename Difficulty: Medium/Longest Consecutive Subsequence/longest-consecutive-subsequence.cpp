class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        int n= arr.size();
        if(n==0) return 0;
        int longest=1;
        unordered_set<int>st;
        
        for(int i=0; i<n; i++){
            st.insert(arr[i]);
        }
        
        for(auto it : st){
            if(st.find(it-1)==st.end()){
                int x= it;
                int cnt=1;
                
                while(st.find(x+1)!=st.end()){
                    x=x+1;
                    cnt++;
                }
                longest=max(longest,cnt);
            }
        }
        return longest;
        
    }
};