class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        stack<TreeNode*> stackp, stackq;
        while(true){
            while(p!=NULL || q!=NULL){
                if((p==NULL && q!=NULL) || (p!=NULL && q==NULL)){
                    return false;
                }
                if(p->val != q->val){
                    return false;
                }
                stackp.push(p); stackq.push(q);
                p = p->left; q = q->left;
            }
            if(stackp.empty() && stackq.empty())
                break;
            
            p = stackp.top(); stackp.pop();
            q = stackq.top(); stackq.pop();
            p = p->right; q = q->right;
        }
        return true;
    }
};
