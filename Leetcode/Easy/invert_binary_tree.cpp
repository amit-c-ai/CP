class Solution {
public:
    void invert(TreeNode* root){
        TreeNode *temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
    
    void travel(TreeNode* root){
        if(root==NULL){
            return;
        }
        travel(root->left);
        travel(root->right);
        if(root->left || root->right){
            invert(root);
        }
    }
    
    TreeNode* invertTree(TreeNode* root) {
        travel(root);
        return root;
    }
};
