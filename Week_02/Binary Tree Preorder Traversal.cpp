
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        if(!root)
          return result;
        stack<TreeNode*> stack;
        stack.push(root);
        while(!stack.empty()){
            root=stack.top();
            if(root)
            result.push_back(root->val);
            stack.pop();
            if(root->right)
            stack.push(root->right);
            if(root->left)
            stack.push(root->left);
        }
    return result;
    }

};