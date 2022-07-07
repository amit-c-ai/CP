class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = head;
        int count(0);
        while(temp!=NULL){
            temp=temp->next;
            count++;
        } int size = count-n;
        temp = head;
        if(size==0){
            ListNode *del = head;
            head = temp->next;
            delete del;
            return head;
        }
        if(size<=0){
            return head->next;
        }
        for(int i=1; i<size; i++){
            temp = temp->next;
        }
        ListNode *del = temp->next;
        temp->next = temp->next->next;
        delete del;
        return head;
    }
};
