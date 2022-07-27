class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root, bool isleft=false) {
        if(!root){return 0;}
        if(!root->left && !root->right){
            if(isleft)
                return root->val;
            return 0;
        }
        
        int lsum = sumOfLeftLeaves(root->left, true);
        int rsum = sumOfLeftLeaves(root->right, false);
        
        return lsum+rsum;
    }
};
