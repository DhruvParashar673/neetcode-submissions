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
int res=0;
    void fun(TreeNode* root,int temp){
        
        if(root==NULL) return;
if(root->left==NULL && root->right==NULL){
    res=max(res,temp+1);
    return;
}
        temp+=1;
        if(root->left){
            fun(root->left,temp);
        }
        if(root->right){
            fun(root->right,temp);
        }
        
    }
    int maxDepth(TreeNode* root) {
        int temp=0;
        fun(root,temp);

        return res;
        
    }
};
