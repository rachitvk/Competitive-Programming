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
    
    int ans=0;
    
    void helper(TreeNode* root,int sum){
        if(!root)
            return;
        
        if(!root->left && !root->right){
            ans+=(sum*10+root->val);
            return;
        }
        
        if(root->left)
            helper(root->left,sum*10+root->val);
        
        if(root->right)
            helper(root->right,sum*10+root->val);
        
    }
    
    int sumNumbers(TreeNode* root) {
        helper(root,0);
        
        return ans;
        
    }
};