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
    vector<int> preorderTraversal(TreeNode* root) {
         bool flag=false;
        
        stack<TreeNode*>s;
        vector<int>ans;
        
        while(!flag){
            if(root){
                s.push(root);
                ans.push_back(root->val);
                root=root->left;
            }else{
                if(s.empty())
                    flag=true;
                else{
                    TreeNode* curr=s.top();
                    s.pop();
                    root=curr->right;
                }
            }
        }
        
        return ans;
    }
};