/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
  public:
    Node* find(Node* head, int k){
        int cnt=1;
        while(head!=NULL){
            if(cnt==k) return head;
            cnt++;
            head=head->next;
        }
        return head;
    }
    Node* rotate(Node* head, int k) {
        // Your code here
        if(!head || k==0){
            return head;
        }
        
        int len=1;
        Node* temp=head;
        while(temp->next!=NULL){
            len++;
            temp=temp->next;
        }
        
        
        if(k%len==0) return head;
        
        k=k%len;
        
        temp->next= head;
        
        Node* last= find(head, k);
        head= last->next;
        last->next=NULL;
        
        return head;
    }
};