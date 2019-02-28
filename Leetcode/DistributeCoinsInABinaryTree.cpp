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
    
    int ans=0;
public:
    int distributeCoins(TreeNode* root) {
        dfs(root);
        return ans;
    }
    
    int dfs(TreeNode* root){
        if(!root)
            return 0;
        int l=dfs(root->left);
        int r=dfs(root->right);
        
        ans+=abs(l)+abs(r);
        return root->val+l+r-1;
    }
};