class Solution {
public:
    bool ismirror(TreeNode *root1, TreeNode *root2){
        if(root1==NULL && root2==NULL){return true;}    
        
        if(root1 && root2 && root1->val == root2->val){
            return ismirror(root1->left, root2->right) && ismirror(root1->right, root2->left);
        }
        return false;
    }
    
    bool isSymmetric(TreeNode* root) {
        return ismirror(root, root);
    }
};
