/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* getMid(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* merge(ListNode* l1, ListNode* l2){
        if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }

        ListNode* dummy= new ListNode(-1);
        ListNode* temp= dummy;

        while(l1!=NULL && l2!=NULL){
            if(l1->val<=l2->val){
                temp->next=l1;
                l1=l1->next;
            }
            else{
                temp->next=l2;
                l2=l2->next;
            }
            temp=temp->next;
        }
        if(l1!=NULL){
            temp->next=l1;
        }
        if(l2!=NULL){
            temp->next=l2;
        }

        return dummy->next;
    }
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next){
            return head;
        }

        ListNode* mid= getMid(head);

        ListNode* left= head;
        ListNode* right= mid->next;
        mid->next=NULL;

        left=sortList(left);
        right=sortList(right);

        return merge(left,right);
    }
};