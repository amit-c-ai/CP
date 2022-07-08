class Solution {
public:
    int height(TreeNode *root){
        if(!root){return 0;}
        return 1+max(height(root->left), height(root->right));
    }
    
    bool isBalanced(TreeNode* root) {
        if(!root || (!root->left && !root->right)){return true;}
        int lheight=0, rheight=0;
        
        if(root->left){lheight = height(root->left);}
        if(root->right){rheight = height(root->right);}
        
        int moddiff = abs(lheight-rheight);
        if(moddiff<=1)
            return isBalanced(root->left) && isBalanced(root->right);
        return false;
    }
};
