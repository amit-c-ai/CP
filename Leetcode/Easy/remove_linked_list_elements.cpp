class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head){
            return head;
        }
        ListNode *temp = head, *tofree;
        while(temp && temp->val == val){
            tofree = head;
            temp = temp->next;
            head = temp;
            delete(tofree);
        }
        cout<<"pp";
        while(temp && temp->next){
            if(temp->next->val == val){
                tofree = temp->next;
                temp->next = temp->next->next;
                delete(tofree);
            }
            else{
                temp = temp->next;
            }
        }
        return head;
    }
};
