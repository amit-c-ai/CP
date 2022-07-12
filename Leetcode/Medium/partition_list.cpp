class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL){
            return NULL;
        }
        ListNode *temp = head;
        ListNode *dummy = new ListNode();
        queue<ListNode*> ql, qr;
        
        while(temp!=NULL){
            if(temp->val < x){ql.push(temp);}
            else{qr.push(temp);}
            temp = temp->next;
        }int size = ql.size(); temp=dummy;
        
        for(int i=0; i<size; i++){
            temp->next = ql.front(); ql.pop();
            temp = temp->next;
        }size = qr.size();
        
        for(int i=0; i<size; i++){
            temp->next = qr.front(); qr.pop();
            temp = temp->next;
        }temp->next = NULL;
        
        return dummy->next;
    }
};
