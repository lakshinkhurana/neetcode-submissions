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
        //right most node bfs , pushing last node of queue per level into the result vector
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode*node=q.front();
            vector<TreeNode*>nodeLevel;
            while(!q.empty()){
                node=q.front();
                nodeLevel.push_back(node);
                q.pop();
            }
            for(int i=0;i<nodeLevel.size();i++){
                if(nodeLevel[i]->left)q.push(nodeLevel[i]->left);
                if(nodeLevel[i]->right)q.push(nodeLevel[i]->right);
            }
            res.push_back(node->val);
        }
        return res;
    }
};
