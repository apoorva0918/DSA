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
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* temp=head;

        while(temp!=NULL){
            ListNode* front= temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }
    ListNode* findk(ListNode* temp, int k){
        k-=1;
        while(temp!=NULL && k>0){
            k--;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp= head;
        ListNode* prevNode=NULL;
        ListNode* nextNode=NULL;

        while(temp!=NULL){
            ListNode* kthNode= findk(temp,k);
            if(kthNode==NULL){
                if(prevNode){
                    prevNode->next=nextNode;
                    break;
                }
            }
            nextNode= kthNode->next;
            kthNode->next=NULL;
            reverse(temp);
            if(temp==head){
                head=kthNode;
            }
            else{
                prevNode->next=kthNode;
            }
            prevNode=temp;
            temp=nextNode;
        }
        return head;

    }
};