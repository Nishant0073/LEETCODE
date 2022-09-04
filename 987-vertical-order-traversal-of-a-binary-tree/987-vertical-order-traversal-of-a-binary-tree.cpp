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
    void trav(int vlev,int hlev,TreeNode* root, map<int,vector<pair<int,int>>> &mp)
    {
        if(root==NULL)
            return ;
        mp[hlev].push_back({vlev,root->val});
        if(root->left)
            trav(vlev+1,hlev-1,root->left,mp);
        if(root->right)
             trav(vlev+1,hlev+1,root->right,mp);
            
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        //map<int,pair<int,vector<int>>>mp;
        map<int,vector<pair<int,int>>>mp;
        trav(0,0,root,mp);
        vector<vector<int>> v;
        for(auto it:mp)
        {
             sort(it.second.begin(),it.second.end());
            vector<int>tmp;
            for(auto i:it.second)
            {
                tmp.push_back(i.second);
            }
            v.push_back(tmp);    
        }
        
        
        return v;
    }
};