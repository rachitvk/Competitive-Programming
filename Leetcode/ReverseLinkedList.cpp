/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
    ListNode* h;
    
    void helper(ListNode* curr,ListNode* prev){
        if(!curr)
            h = prev;
        else{
            helper(curr->next,curr);
            curr->next = prev;
        }
    }
    
    ListNode* reverseList(ListNode* head) {
        helper(head,NULL);
        return h;
    }
};