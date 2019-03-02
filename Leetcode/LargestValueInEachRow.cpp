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
    
    map<int,int>mp;
    
    void helper(TreeNode* root,int level){
        if(!root)
            return;
        
        if(mp.find(level)==mp.end())
          mp[level]=root->val;
        else if(mp[level]<root->val)
            mp[level]=root->val;
        
        helper(root->left,level+1);
        helper(root->right,level+1);
    }
    
    vector<int> largestValues(TreeNode* root) {
        helper(root,0);
        vector<int>ans;
        
        for(auto itr=mp.begin();itr!=mp.end();itr++){
            ans.push_back(itr->second);
        }
        return ans;
    }
};