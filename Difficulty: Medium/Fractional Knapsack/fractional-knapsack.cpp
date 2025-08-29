
class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        vector<pair<double, int>> ratio;
        for(int i=0; i<val.size(); i++){
            double r= (double) val[i]/ (double) wt[i];
            ratio.push_back({r,i});
        }
        
        sort(ratio.rbegin(),ratio.rend());
        
        double totVal=0;
        
        for(int i=0; i<wt.size(); i++){
            int idx= ratio[i].second;
            if(wt[idx]<=capacity){
                capacity-=wt[idx];
                totVal+=val[idx];
            }
            else{
                totVal+= val[idx]* ((double) capacity / wt[idx]);
                break;
            }
        }
        return totVal;
    }
};
