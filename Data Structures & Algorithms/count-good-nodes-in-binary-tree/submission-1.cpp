class Solution {
public:
    int countGood(TreeNode* node, int currentMax) {
        if (!node) return 0;
        
        int res = (node->val >= currentMax) ? 1 : 0;
        currentMax = max(currentMax, node->val);
        
        return res + countGood(node->left, currentMax) + countGood(node->right, currentMax);
    }

    int goodNodes(TreeNode* root) {
        return countGood(root, root->val);
    }
};