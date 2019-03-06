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
    
    vector<vector<int>>ans;
    map<int,vector<int>>mp;
    
    void helper(TreeNode* root,int level){
        if(!root)
            return;
        
        mp[level].push_back(root->val);
        helper(root->left,level+1);
        helper(root->right,level+1);
    }
    
    vector<vector<int>>levelOrder(TreeNode* root) {
        helper(root,0);
        
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            ans.push_back(itr->second);
        }
        return ans;
    }
};