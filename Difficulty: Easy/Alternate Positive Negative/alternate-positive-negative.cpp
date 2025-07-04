// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        
        vector<int>pos;
        vector<int>neg;
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i]>=0) pos.push_back(arr[i]);
            else neg.push_back(arr[i]);
        }
        
        if(pos.size()<neg.size()){
            for(int i=0; i<pos.size();i++){
                arr[2*i]=pos[i];
                arr[2*i+1]=neg[i];
            }
            
            int index= pos.size()*2;
            for(int i=pos.size(); i<neg.size(); i++){
                arr[index]=neg[i];
                index++;
            }
        }
        else{
            for(int i=0; i<neg.size(); i++){
                arr[2*i]=pos[i];
                arr[2*i+1]=neg[i];
            }
            
            int index= neg.size()*2;
            for(int i=neg.size(); i<pos.size();i++){
                arr[index]=pos[i];
                index++;
            }
        }
        
        
        
    }
};