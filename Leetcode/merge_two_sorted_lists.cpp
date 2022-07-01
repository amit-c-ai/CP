class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *p1 = l1;
        ListNode *p2 = l2;
        ListNode *newnode = new ListNode(-1);
        ListNode *p3 = newnode;
        
        if(p1==NULL){
            return p2;
        }
        if(p2==NULL){
            return p1;
        }
        
        while(p1!=NULL and p2!=NULL){
            
            if(p1->val <= p2->val){
                p3->next = p1;
                p1 = p1->next;
            }
            else{
                p3->next = p2;
                p2 = p2->next;
            }
            p3 = p3->next;
        }
        
        while(p1 != NULL){
            p3->next = p1;
            p1 = p1->next;
            p3 = p3->next;
        }
        while(p2 != NULL){
            p3->next = p2;
            p2 = p2->next;
            p3 = p3->next;
        }
        
        return newnode->next;
    }
};
