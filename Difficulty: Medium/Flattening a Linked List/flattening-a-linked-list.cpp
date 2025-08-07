/* Node structure  used in the program

struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};
*/

class Solution {
  public:
    Node* merge(Node* l1 , Node* l2){
        Node* dummy= new Node(-1);
        Node* res= dummy;
        
        while(l1!=NULL && l2!=NULL){
            if(l1->data<l2->data){
                res->bottom=l1;
                res=l1;
                l1=l1->bottom;
            }
            else{
                res->bottom= l2;
                res=l2;
                l2=l2->bottom;
            }
            res->next=NULL;
        }
        if(l1) res->bottom=l1;
        else res->bottom=l2;
        //if(dummy->bottom) dummy->bottom->next=NULL;
        return dummy->bottom;
    }
    // Function which returns the  root of the flattened linked list.
    Node *flatten(Node *head) {
        // Your code here
        if(head==NULL || head->next==NULL){
            return head;
        }
        
        Node* mergedHead= flatten(head->next);
        head=merge(head,mergedHead);
        return head;
    }
};