class Solution {
  public:
    void merge(vector<int> &a, int l, int mid, int r){
        vector<int>temp;
        int low= l;
        int high= mid+1;
        
        while(low<=mid && high<=r){
            if(a[low]<=a[high]){
                temp.push_back(a[low]);
                low++;
            }
            
            else {
                temp.push_back(a[high]);
                high++;
            }
        }
        
        while(low<=mid){
            temp.push_back(a[low]);
            low++;
        }
        
        while(high<=r){
            temp.push_back(a[high]);
            high++;
        }
        
        for(int i=l; i<=r; i++){
            a[i]=temp[i-l];
        }
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        
        if(l>=r){
            return;
        }
        
        int mid= (l+r)/2;
        
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
        
    }
};