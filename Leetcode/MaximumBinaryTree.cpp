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
    
    int findmax(vector<int>& nums,int l,int r){
        
       // if(l==r)
         //   return l;
        
        int j;
        int mx=INT_MIN;
        
        for(int i=l;i<=r;i++){
            if(nums[i]>mx){
                mx=nums[i];
                j=i;
            }
        }
        
        return j;
    }
    
    TreeNode* MaxTree(vector<int>& nums,int l,int r){
        int mx=findmax(nums,l,r);
        
      //  cout << l << " " << r << " " << mx << endl;
        
        TreeNode* root = new TreeNode(nums[mx]);
    
        
        if(mx>l)
            root->left=MaxTree(nums,l,mx-1);
        else
            root->left=NULL;
        
        if(mx<r)
            root->right=MaxTree(nums,mx+1,r);
        else
            root->right=NULL;
        
        return root;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return MaxTree(nums,0,nums.size()-1);
    }
};