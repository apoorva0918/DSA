/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    /* Function to delete a node from a linked list */
    Node* deleteNode(Node* head, int x) {
        if(head==NULL || x<=0){
            return head;
        }
        
        if(x==1){
            Node* temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        
        Node* curr= head;
        for(int i=1; i<x-1 && curr!=NULL ; i++){
            curr=curr->next;
        }
        
        if(curr==NULL || curr->next==NULL){
            return head;
        }
        
        Node* temp=curr->next;
        curr->next=temp->next;
        delete temp;
        return head;
        
    }
};