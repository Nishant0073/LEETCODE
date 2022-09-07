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
    void preOrd(TreeNode *root,string &s)
    {
        if(root==NULL)
            return;
        
            s+=to_string(root->val);
        if(root->left==NULL && root->right==NULL)
            return ;
        // if(root->left!=NULL)
        // {
            s+='(';
            preOrd(root->left,s);
            s+=')';
        // }
        if(root->right!=NULL)
        {
            s+='(';
            preOrd(root->right,s);
            s+=')';
        }
    }
    string tree2str(TreeNode* root) {
        string s="";
        preOrd(root,s);
        
        return s;
    }
};