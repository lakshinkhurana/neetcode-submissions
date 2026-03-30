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
    vector<vector<int>>res;
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root)return {};
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode*node=q.front();
            vector<int>level;
            vector<TreeNode*>nodelevel;
            while(!q.empty()){
                level.push_back(q.front()->val);
                nodelevel.push_back(q.front());
                q.pop();
            }
            res.push_back(level);
            for(int i=0;i<nodelevel.size();i++){
                if(nodelevel[i]->left)q.push(nodelevel[i]->left);
                if(nodelevel[i]->right)q.push(nodelevel[i]->right);
            }   
        }
        return res;
    }
};
