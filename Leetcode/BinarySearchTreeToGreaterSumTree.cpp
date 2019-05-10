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
    
    int sum = 0;
    
    void helper(TreeNode* root){
        if(!root)
            return;
        
        helper(root->right);
        root->val = root->val + sum;
        sum = root->val;
        helper(root->left);
    }
    
    TreeNode* bstToGst(TreeNode* root) {
        helper(root);
        return root;
    }
};