class Solution {
public:
    vector<int> v;
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> stack;
        while(true){
            if(root!=NULL){
                stack.push(root);
                root = root->left;
            }
            else{
                if(stack.empty()){break;}
                {
                    root = stack.top(); stack.pop();
                    v.push_back(root->val);
                    root = root->right;
                }
            }
        }
        return v;    
    }
};
