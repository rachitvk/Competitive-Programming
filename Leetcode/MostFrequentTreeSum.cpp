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
    
    map<int,int,greater<int>>mp1;
    map<int,vector<int>,greater<int>>mp2;
    
    int helper(TreeNode* root){
        if(!root)
            return 0;
        int sum=root->val + helper(root->left) + helper(root->right);
        mp1[sum]++;
        mp2[mp1[sum]].push_back(sum);
        return sum;
    }
    
    vector<int> findFrequentTreeSum(TreeNode* root) {
        
        vector<int>ans;
        if(!root)
             return ans;       
        helper(root);
        auto itr=mp2.begin();
        
        return itr->second;
    }
};