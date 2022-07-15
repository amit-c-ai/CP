class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *dummy = new ListNode();
        dummy->next = head;
        ListNode *temp = dummy, *to_del;
        int check=-1;

        while(temp->next && temp->next->next){
            if(temp->next->val == temp->next->next->val){
                check = temp->next->val;
                while(temp->next && temp->next->val==check){
                    to_del = temp->next;
                    temp->next = temp->next->next; delete to_del;   
                }
                
            }
            else
                temp = temp->next;
        }
        return dummy->next;
    }
};
