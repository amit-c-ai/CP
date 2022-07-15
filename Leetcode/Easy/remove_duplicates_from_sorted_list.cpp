class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *temp = head, *to_del;
        int check=-1;

        while(temp && temp->next){
            if(temp->val == temp->next->val){
                check = temp->val;
                while(temp->next && temp->next->val==check){
                    to_del = temp->next;
                    temp->next = temp->next->next; delete to_del;   
                }
                
            }
            else
                temp = temp->next;
        }
        return head;
    }
};
