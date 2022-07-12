class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL || left==right){
            return head;
        }
        ListNode* dummy = new ListNode(); dummy->next = head;
        ListNode *temp = dummy, *l = dummy, *r = dummy;
        stack<ListNode*> stack;
        int count=0;
        while(temp!=NULL){
            temp = temp->next;
            count++;
            if(count<left){
                l=l->next;
            }
            else if(count<=right){
                stack.push(temp);
            }
            else{
                r = temp;
                break;
            }
        }
        int size = stack.size();
        for(int i=0; i<size; i++){
            l->next = stack.top(); stack.pop();
            l = l->next;
        }
        l->next=r;
        return dummy->next;
    }
};
