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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode *slow=head;
        // if(head->next!=NULL) return head;
        ListNode *fast=head->next;
        while(slow!=NULL && fast!=NULL){
          int slowvalue=slow->val;
          int fastvalue=fast->val;
          slow->val=fastvalue;
          fast->val=slowvalue;
            
            if(slow->next!=NULL) slow=slow->next->next;
            if(fast->next!=NULL) fast=fast->next->next;
        }
        return head;
    }
};