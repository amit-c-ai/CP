class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }
        ListNode *ans = new ListNode();
        ListNode *nsa = new ListNode();
        ListNode *temp_nsa = nsa;
        ListNode *temp_ans=ans, *temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next; count++;
        } k=k%count; int size = count-k;
        
        temp = head;
        for(int i=0; i<size; i++){
            ListNode *node = new ListNode(temp->val); temp=temp->next;
            temp_nsa->next = node;
            temp_nsa = temp_nsa->next;
        }
        
        for(int i=0; i<k; i++){
            ListNode *node = new ListNode(temp->val); temp = temp->next;
            temp_ans->next = node;
            temp_ans = temp_ans->next;
        } temp_ans->next = nsa->next;
        
        return ans->next;
    }
};
