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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
          if(!t1 && !t2)
              return NULL;
         if(t1 && !t2){
              TreeNode* r=new TreeNode(t1->val);
              r->left=mergeTrees(t1->left,t2);
              r->right=mergeTrees(t1->right,t2);
             return r;
         }
         else if(!t1 && t2){
             TreeNode* r=new TreeNode(t2->val);
             r->left=mergeTrees(t1,t2->left);
             r->right=mergeTrees(t1,t2->right);
             return r;
         }
         else{
            TreeNode* r=new TreeNode(t1->val+t2->val);
            r->left=mergeTrees(t1->left,t2->left);
            r->right=mergeTrees(t1->right,t2->right);
             return r;
         }
        return NULL;
    }
};