/*
The structure of linked list is the following

struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
  
    Node* getMid(Node* head){
        Node* slow=head;
        Node* fast=head;
        
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    
    Node* merge(Node* l1, Node* l2){
        if(!l1){
            return l2;
        }
        if(!l2){
            return l1;
        }
        
        Node* dummy= new Node(-1);
        Node* temp=dummy;
        
        while( l1 && l2 ){
            if(l1->data <= l2->data){
                temp->next=l1;
                l1=l1->next;
            }
            else{
                temp->next=l2;
                l2=l2->next;
            }
            temp=temp->next;
        }
        
        if(l1){
            temp->next=l1;
        }
        if(l2){
            temp->next=l2;
        }
        
        return dummy->next;
    }
    // Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        // your code here
        if(!head || !head->next){
            return head;
        }
        
        Node* mid= getMid(head);
        
        Node* left=head;
        Node* right= mid->next;
        mid->next=NULL;
        
        left=mergeSort(left);
        right=mergeSort(right);
        
        return merge(left,right);
    }
};