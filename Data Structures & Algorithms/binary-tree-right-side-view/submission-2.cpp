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
    vector<int> rightSideView(TreeNode* root) {
        if(!root)return {};
        vector<int>res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode*node=q.front();
            vector<TreeNode*>level;
            while(!q.empty()){
                node=q.front();
                level.push_back(node);
                q.pop();
            }
            for(int i=0;i<level.size();i++){
                if(level[i]->left)q.push(level[i]->left);
                if(level[i]->right)q.push(level[i]->right);
            }
            res.push_back(node->val);
        }
        return res;
    }
};
