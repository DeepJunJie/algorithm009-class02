
class Solution {
public:
   vector<int> inorderTraversal(TreeNode* root) {
         if(!root)
           return {};
         vector<int> result;
         stack<TreeNode*> stack;
         while(root||!stack.empty()){
            while(root){
                 stack.push(root);
                 root=root->left;
            }
            root=stack.top();
            result.push_back(stack.top()->val);
            stack.pop();
            root = root->right;
         }   
         return result;
    }
};