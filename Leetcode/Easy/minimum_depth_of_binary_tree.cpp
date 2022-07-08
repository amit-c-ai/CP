class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL){return 0;}
        
        int lDepth=0, rDepth=0;
        if(root->left){lDepth = minDepth(root->left);}
        if(root->right){rDepth = minDepth(root->right);}
        
        if(root->left==NULL){return rDepth+1;}
        if(root->right==NULL){return lDepth+1;}
        
        if(lDepth<rDepth){
            return lDepth+1;
        }return rDepth+1;
    }
};
