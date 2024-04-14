/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
 int sum=0;
    void traversal(TreeNode* root,bool isleft){
       if(!root){return ;}
       if(!root->left && !root->right && isleft){
          sum+=root->val;
       }
       traversal(root->left,true);
       traversal(root->right,false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
       
     traversal(root,false);
     return sum;
    }
};
