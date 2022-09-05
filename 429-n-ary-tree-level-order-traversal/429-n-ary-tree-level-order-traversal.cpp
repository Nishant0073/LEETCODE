/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> v;
        queue<Node*> qe;
        if(!root)
            return v;
        qe.push(root);
        v.push_back({root->val});
        while(!qe.empty())
        {
            int n = qe.size();
          
            vector<int>tmp;
            for(int i=0;i<n;i++)
            {
                Node *top = qe.front();
               qe.pop();
                for(auto it:top->children)
                {
                    if(it!=NULL)
                    {
                        qe.push(it);
                        tmp.push_back(it->val);
                    }
                }
            }
            if(tmp.size()!=0)
                v.push_back(tmp);
        }
        return v;
        
    }
};