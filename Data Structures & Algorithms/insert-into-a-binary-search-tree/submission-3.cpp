class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* child = new TreeNode(val);
        if(!root)return child;
        TreeNode* node = root;
        parentFinder(node, val);
        if (val < node->val) node->left = child;
        else node->right = child;
        return root;
    }

    void parentFinder(TreeNode*& node, int val) {
        if (val < node->val) {
            if (!node->left) return;
            node = node->left;
            parentFinder(node, val);
        } else {
            if (!node->right) return;
            node = node->right;
            parentFinder(node, val);
        }
    }
};