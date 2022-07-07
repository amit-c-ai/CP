class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> v;
        for(int i=0; i<lists.size(); i++){
            while(lists[i]!=NULL){
                v.push_back(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
        sort(v.begin(), v.end());
        ListNode* ans = new ListNode();
        ListNode* temp = ans;
        for(int i=0; i<v.size(); i++){
            ListNode *node = new ListNode(v[i]);
            temp->next = node; temp=temp->next;
        }
        return ans->next;
    }
};
