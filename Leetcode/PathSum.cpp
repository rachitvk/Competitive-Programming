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
    
    bool helper(TreeNode* root,int sum,int curr){
        
        bool l=false;
        bool r=false;
        
        if(!root)
            return false;
        if(!root->left && !root->right)
            return (curr+root->val == sum);
        
        if(root->left)
            l=helper(root->left,sum,curr+root->val);
        if(root->right)
            r=helper(root->right,sum,curr+root->val);
        
        return (l || r);
    }
    
    bool hasPathSum(TreeNode* root, int sum) {
        return helper(root,sum,0);
            
    }
};