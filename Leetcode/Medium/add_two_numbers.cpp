class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode();
        ListNode *temp = ans;
        int sum=0, carry=0;
        while(l1!=NULL && l2!=NULL){
            sum = l1->val + l2->val + carry; l1=l1->next; l2=l2->next;
            carry = sum/10; sum=sum%10;
            ListNode *node = new ListNode(sum);
            temp->next = node; temp = temp->next;
        }
        if(l1!=NULL){
            while(l1!=NULL){
                sum = carry + l1->val; l1=l1->next;
                carry = sum/10; sum=sum%10;
                ListNode *node = new ListNode(sum);
                temp->next = node; temp = temp->next;
            }
        }
        if(l2!=NULL){
            while(l2!=NULL){
                sum = carry + l2->val; l2=l2->next;
                carry = sum/10; sum=sum%10;
                ListNode *node = new ListNode(sum);
                temp->next = node; temp = temp->next;
            }
        }
        if(carry!=0){
            ListNode *node = new ListNode(carry);
            temp->next = node; temp = temp->next;
        }
        return ans->next;
    }
};