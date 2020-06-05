/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {

public:
    TreeNode * BuildTree (TreeNode * root ,vector<int>&preorder, vector<int>&inorder){
        int i=0;
        if(preorder.size()==0||inorder.size()==0)
           return nullptr;
         for(int j=0;j<inorder.size();j++){
            if(preorder[0]==inorder[j]){
                i=j;
                break;
            }
        }
        vector<int> preorder_left,preorder_right,inorder_left,inorder_right;
        for(int j=1;j<i+1;j++)
           preorder_left.push_back(preorder[j]);
        for(int j=i+1;j<preorder.size();j++)
           preorder_right.push_back(preorder[j]);
        for(int j=0;j<i;j++)
           inorder_left.push_back(inorder[j]);
        for(int j=i+1;j<inorder.size();j++)
           inorder_right.push_back(inorder[j]);
        root = new TreeNode(preorder[0]);
        root->left=BuildTree(root->left, preorder_left,inorder_left);
        root->right=BuildTree(root->right, preorder_right,inorder_right);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode*root=nullptr;
        root=BuildTree(root ,preorder, inorder);
        return root;
    }
};