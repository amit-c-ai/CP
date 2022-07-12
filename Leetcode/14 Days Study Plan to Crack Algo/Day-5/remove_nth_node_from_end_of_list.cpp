class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *curr = new ListNode(), *slow=curr, *fast=curr, *todel;
        curr->next = head;
        while(fast->next && n--){
            fast = fast->next;
        }
        while(fast->next){
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return curr->next;
    }
};
