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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root)return {};
        vector<vector<int>> res;
        queue <TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode*node=q.front();
            vector<int>level;
            vector<TreeNode*>nodeLevel;
            while(!q.empty()){
                node=q.front();
                q.pop();
                level.push_back(node->val);
                nodeLevel.push_back(node);
            }
            res.push_back(level);
            for(int i=0;i<nodeLevel.size();i++){
                if(nodeLevel[i]->left)q.push(nodeLevel[i]->left);
                if(nodeLevel[i]->right)q.push(nodeLevel[i]->right);
            } 
        }
        return res;
    }
};
