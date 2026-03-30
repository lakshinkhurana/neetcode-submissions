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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)return nullptr;
        if(key<root->val){
            root->left=deleteNode(root->left,key);
        }else if(key>root->val){
            root->right=deleteNode(root->right,key);
        }else{
            //now deletion
            if(root->left==nullptr){
                TreeNode*temp=root->right;
                delete root;
                return temp;
            }else if(root->right==nullptr){
                TreeNode*temp=root->left;
                delete root;
                return temp;
            }else{
                TreeNode*child=minChild(root->right);
                root->val=child->val;
                root->right=deleteNode(root->right,child->val);
            }
        }
        return root;
    }
    TreeNode* minChild(TreeNode*node){
        while(node->left!=nullptr)node=node->left;
        return node;
    }
};