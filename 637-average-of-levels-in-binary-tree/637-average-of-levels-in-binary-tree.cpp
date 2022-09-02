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
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<double>v;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            double qsize = q.size();
            double sum = 0;
            for(int i=0;i<qsize;i++)
            {
                auto frnt = q.front();
                q.pop();
                sum+=frnt->val;
                if(frnt->left)
                    q.push(frnt->left);
                if(frnt->right)
                    q.push(frnt->right);
            }
            v.push_back(sum/qsize);
        }
        return v;
        
    }
};