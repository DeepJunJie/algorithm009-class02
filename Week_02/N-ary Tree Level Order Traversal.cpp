
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
       queue<Node*> s;
       vector<vector<int>> result;
       int loop=0;
       if(!root)
          return result;
        s.push(root);
      while(!s.empty()){
        vector<int> line;
        int size=s.size();
        while(size-->0){
           line.push_back(s.front()->val);
              for(int i=0;i<s.front()->children.size();i++)
           s.push(s.front()->children[i]);
        s.pop();
        }
    result.push_back(line); 
    }
        return result;
    }
};