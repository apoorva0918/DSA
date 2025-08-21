// User Fuction template for C++
/*
// Tree Node
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    // Function to return maximum path sum from any node in a tree.
    int findMaxSum(Node *root) {
        // code here
        int maxi=INT_MIN;
        solve(root,maxi);
        return maxi;
    }
    
    int solve(Node* node, int &maxi){
        if(node==NULL){
            return 0;
        }
        
        int left= max(0,solve(node->left,maxi));
        int right= max(0,solve(node->right,maxi));
        
        maxi=max(maxi,node->data+left+right);
        return node->data+ max(left,right);
    }
};