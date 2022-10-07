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
    void trav(TreeNode *root,int lev,map<int,bool> &mp,vector<int> &rightView)
    {
        if(!root)
            return;
        if(!mp[lev])
        {
            rightView.push_back(root->val);
            mp[lev] = true;
        }
        trav(root->right,lev+1,mp,rightView);
        trav(root->left,lev+1,mp,rightView);
        
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>rightView;
        map<int,bool> mp;
        trav(root,0,mp,rightView);
        return rightView;
    }
};