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
    vector<int> postorderTraversal(TreeNode* root) {
        bool flag=false;
        stack<TreeNode*>s;
        vector<int>ans;
        
        while(!flag){
            if(root){
                if(root->right)
                    s.push(root->right);
                s.push(root);
                root=root->left;
            }else{
                if(s.empty())
                    flag=true;
                else{
                    TreeNode* curr=s.top();
                    s.pop();
                    if(!s.empty() && curr->right==s.top()){
                        root=curr->right;  
                        s.pop();
                        s.push(curr);
                    }else{
                        ans.push_back(curr->val);
                        if(!s.empty())
                            root=NULL;
                        else
                            flag=true;
                    }
                }
            }
        }
        return ans;
    }
};