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
bool flag=true;
int fun(TreeNode* root){
    if(root==NULL) return -1;

    int lefth=1+fun(root->left);
    int righth=1+fun(root->right);

    if(abs(lefth-righth)>1) {
        flag=false;
    
    }
    return max(lefth,righth);
}
    bool isBalanced(TreeNode* root) {
         fun(root);

         return flag;
    }
};
