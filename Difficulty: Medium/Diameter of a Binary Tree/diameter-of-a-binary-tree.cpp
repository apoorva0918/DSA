/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* newNode(int val) {
    return new Node(val);
}
*/

class Solution {
  public:
    int solve(Node* root, int & diameter){
        if(!root) return 0;
        
        int lh= solve(root->left, diameter);
        int rh= solve(root->right, diameter);
        
        diameter= max(diameter,lh+rh);
        
        return 1+ max(lh,rh);
    }
    int diameter(Node* root) {
        // Your code here
        int ans=0;
        solve(root,ans);
        return ans;
    }
};