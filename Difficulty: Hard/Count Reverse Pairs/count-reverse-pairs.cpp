// User function Template for C++

class Solution {
  public:
    void merge(vector<int>&arr, int low, int mid, int high){
        int left=low;
        int right=mid+1;
        vector<int>temp;
        
        while(left<=mid && right<=high){
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }
        
        for(int i=low; i<=high; i++){
            arr[i]=temp[i-low];
        }
    }
    int count(vector<int>&arr, int low, int mid, int high){
        int cnt=0;
        int right=mid+1;
        for(int i=low; i<=mid; i++){
            while(right<=high && arr[i]>2*(long long)arr[right]){
                right++;
            }
            cnt+= (right-(mid+1));
        }
        return cnt;
    }
    int mergeSort(vector<int>&arr, int low, int high){
        int cnt=0;
        int mid=(low+high)/2;
        if(low>=high) return cnt;
        cnt+= mergeSort(arr,low,mid);
        cnt+=mergeSort(arr,mid+1,high);
        cnt+= count(arr,low,mid,high);
        merge(arr,low,mid,high);
        return cnt;
    }
    int countRevPairs(int n, vector<int> arr) {
        return mergeSort(arr,0,arr.size()-1);
        
    }
};