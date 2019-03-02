/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    int ans,lvl=-1;
    
    void leftmostnode(TreeNode* root,int level){
        if(!root)
            return;
        
       
        if(level>lvl){
            lvl=level;
            ans=root->val;
        }
        
        leftmostnode(root->left,level+1);
        leftmostnode(root->right,level+1);
    }
    
    
    int findBottomLeftValue(TreeNode* root) {
        leftmostnode(root,0);
        return ans;
    }
};