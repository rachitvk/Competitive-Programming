
class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
        if(!root)
            return NULL;
        
        TreeNode* r1=pruneTree(root->left);
        TreeNode* r2=pruneTree(root->right);
        
        if(root->val==1 || r1 || r2){
             if(r1)
                 root->left=r1;
            else
                root->left=NULL;
             if(r2)
                 root->right=r2;
            else
                root->right=NULL;
            return root;
        }
       
        return NULL;
    }
};