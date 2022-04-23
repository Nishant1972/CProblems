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
    ListNode* reverse(ListNode* head) {
        ListNode* curr = head, *prev = NULL, *nex = NULL;
        
        while(curr != NULL) {
            nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }
        return prev;
    }
    
    int pairSum(ListNode* head) {
        ListNode *slow = head->next, *fast = head->next->next;
        while(fast) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* sec = reverse(slow); // can also use stack...   
        
        int res = 0;
        while(sec) {
            res = max(res, head->val + sec->val);
            head = head->next;
            sec = sec->next;
        }
        
        return res;
    }
};