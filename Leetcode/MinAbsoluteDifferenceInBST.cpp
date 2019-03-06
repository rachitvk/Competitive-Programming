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
    
    vector<int>v;
    
    void helper(TreeNode* root){
        if(!root)
            return;
        helper(root->left);
        v.push_back(root->val);
        helper(root->right);
    }
    
    int getMinimumDifference(TreeNode* root) {
        helper(root);
        
        int ans=INT_MAX;
        int n=v.size();
        
        for(int i=0;i<n-1;i++){
            ans=min(ans,v[i+1]-v[i]);
        }
        
        return ans;
    }
};