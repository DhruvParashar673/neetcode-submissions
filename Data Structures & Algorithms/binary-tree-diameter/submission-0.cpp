class Solution {
public:
    int res = 0;

    int fun(TreeNode* root) {
        if (root == NULL) return -1; // edge-based height

        int leftHeight = fun(root->left);
        int rightHeight = fun(root->right);

        res = max(res, leftHeight + rightHeight + 2);

        return 1 + max(leftHeight, rightHeight);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        fun(root);
        return res;
    }
};
