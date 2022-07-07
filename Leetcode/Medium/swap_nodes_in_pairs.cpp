class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        stack<ListNode*> stack;
        ListNode* ans = new ListNode();
        ListNode* temp = head, *ans_temp = ans;
        int size=0;
        if(temp==NULL){
            return NULL;
        }
        if(temp->next==NULL){
            return head;
        }
        while(temp!=NULL){
            for(int i=0; i<2; i++){
                if(temp==NULL)
                    break;
                stack.push(temp);
                temp = temp->next;   
            } size = stack.size();
            for(int i=0; i<size; i++){
                ans_temp->next = stack.top(); stack.pop();
                ans_temp = ans_temp->next;
            }
        }
        ans_temp->next = NULL;
        return ans->next;
    }
};
