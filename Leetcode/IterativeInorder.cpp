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
    

    vector<int> inorderTraversal(TreeNode* root) {
        bool flag=false;
        
        stack<TreeNode*>s;
        vector<int>ans;
        
        while(!flag){
            if(root){
                s.push(root);
                root=root->left;
            }else{
                if(s.empty())
                    flag=true;
                else{
                    TreeNode* curr=s.top();
                    ans.push_back(curr->val);
                    s.pop();
                    root=curr->right;
                }
            }
        }
        
        return ans;
    }
};