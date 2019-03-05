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
    TreeNode* insertIntoMaxTree(TreeNode* root, int val) {
        if(!root){
            TreeNode* x=new TreeNode(val);
            return x;
        }
        
        if(root->val > val){
                root->right=insertIntoMaxTree(root->right,val);
            return root;
        }else{
            TreeNode* x=new TreeNode(val);
            x->left=root;
            return x;
        }
    }
};