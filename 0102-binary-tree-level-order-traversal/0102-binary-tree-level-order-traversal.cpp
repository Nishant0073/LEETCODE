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
    vector<vector<int>> levelOrder(TreeNode* node) {
        vector<vector<int>> ans;
        if(!node)
            return ans;
        int count=0,i=-1;
        queue<TreeNode*> q;
        q.push(node);
        vector<int> level;
        while(!q.empty())
        {
            if(count==0)
            {
                count=q.size();
                if(level.size()!=0)
                    ans.push_back(level);
                level.clear();
                i++;
            }
            if( node->left!=NULL)
            {
                q.push(node->left);
            }
            if( node->right!=NULL)
            {
                q.push(node->right);
            }
        
            
            int x=node->val;
            level.push_back(x);
            q.pop();
            count--;
            if(!q.empty())
                node=q.front();
            
        }
        
            if(count==0)
            {
                count=q.size();
                if(level.size()!=0)
                    ans.push_back(level);
                level.clear();
                i++;
            }
        return ans;
    }
};