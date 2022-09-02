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
        map<int,vector<double>>mp;
        queue<pair<TreeNode*,int>>q;
        q.push({root,1});
        while(q.size()!=0)
        {
            auto top = q.front();
            q.pop();
            mp[top.second].push_back(top.first->val);
            if(top.first->left!=NULL)
                q.push({top.first->left,top.second+1});
            if(top.first->right!=NULL)
                q.push({top.first->right,top.second+1});
        }
        
        vector<double> ans;
        for(auto it:mp)
        {
            int sum  = 0;
            double n = it.second.size();
            double tmp = 0;
            for(auto i:it.second)
            {
                tmp+=i;
            }
            tmp = tmp/n;
            ans.push_back(tmp);
        }
        return ans;
        
    }
};