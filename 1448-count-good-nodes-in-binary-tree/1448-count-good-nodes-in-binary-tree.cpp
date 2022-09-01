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
    void trav(TreeNode *root,int currMax,int &cnt)
    {
        if(root==NULL)
            return;
        if(currMax<=root->val)
            cnt++;
        currMax = max(currMax,root->val);
        trav(root->left,currMax,cnt);
        trav(root->right,currMax,cnt);
        return;
    }
    int goodNodes(TreeNode* root) {
        int cnt = 0;
        int currMax = INT_MIN;
        trav(root,currMax,cnt);
        return cnt;
    }
};