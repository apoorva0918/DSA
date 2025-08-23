/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // Your Code Here
        vector<int> ans;
        queue<pair<Node*,int>> q;
        map<int,int> mpp;
        
        if(!root) return ans;
        
        q.push({root,0});
        
        while(!q.empty()){
            auto it= q.front();
            q.pop();
            
            Node* node= it.first;
            int level= it.second;
            
            mpp[level]=node->data;
            
            if(node->left){
                q.push({node->left,level-1});
            }
            if(node->right){
                q.push({node->right,level+1});
            }
        }
        for(auto it: mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};