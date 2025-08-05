/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        //  Code Here
        Node* pA= head1;
        Node* pB= head2;
        
        while(pA!=pB){
            pA= pA==NULL ? head2 : pA->next;
            pB= pB==NULL ? head1 : pB->next;
        }
        return pA;
    }
};