/*
struct Node {
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
    vector<int> zigZagTraversal(Node* root) {
        // Code here
        vector<int>ans;
        if(root==NULL){
            return ans;
        }
        
        queue<Node*>q;
        q.push(root);
        bool flag=true;
        
        while(!q.empty()){
            int n= q.size();
            vector<int>level(n);
            
            
            for(int i=0; i<n; i++){
                Node* node= q.front();
                q.pop();
                
                int index= flag ? i : n-i-1;
                
                level[index]= node->data;
                
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            
            flag=!flag;
            for(auto it: level){
                ans.push_back(it);
            }
        }
        return ans;
    }
};