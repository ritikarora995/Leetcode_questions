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
    bool isPalindrome(ListNode* head) {
        string s;
        while(head!=NULL){
            s+=(head->val+'0');
            head=head->next;
        }
        if(s.length()==1){
            return true;
        }
        bool flag=false;
        for(int i=0;i<s.length()/2;i++){
            if(s[i]==s[s.length()-i-1]){
                flag=true;
                // i++;
            }
            else{
               return false;
                
            }
        }
        return flag;
    }
};