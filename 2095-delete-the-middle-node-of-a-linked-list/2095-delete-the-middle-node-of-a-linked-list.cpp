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
    ListNode* deleteMiddle(ListNode* head) {
        
      ListNode *curr=head;
        int count=0;
        while(curr!=NULL){
            count++;
            curr=curr->next;
        }
        if(count==1) return NULL;
        ListNode *curr2=head;
        int cnt=0;
        
        while(cnt!=count/2-1)
        {
            cnt++;
           curr2=curr2->next;
        }
        curr2->next=curr2->next->next;
        // cout<<curr2->val;
        return head;
    }
 };