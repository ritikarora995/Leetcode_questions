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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *curr=head;
        int cnt=0;
        
        while(curr!=NULL){
            cnt++;
            curr=curr->next;
        }
    
        if(n==cnt){
            return head->next;
        }
        int nodedel=cnt-n;
        ListNode *curr1=head;
        while(nodedel>1){
           curr1=curr1->next ; 
            nodedel--;
        }
        if(cnt>=2){
            curr1->next=curr1->next->next;
        }
        // cout<<cnt<<endl;
        return head;
    }
};