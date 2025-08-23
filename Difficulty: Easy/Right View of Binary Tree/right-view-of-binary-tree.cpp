/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
}; */

class Solution {
  public:
    vector<int> solve(Node* root, int level, vector<int> &res){
        if(!root) return res;
        
        if(level==res.size()){
            res.push_back(root->data);
        }
        solve(root->right,level+1,res);
        solve(root->left,level+1, res);
        return res;
    }
    vector<int> rightView(Node *root) {
        //  Code here
        vector<int> res;
        solve(root,0,res);
        return res;
    }
};