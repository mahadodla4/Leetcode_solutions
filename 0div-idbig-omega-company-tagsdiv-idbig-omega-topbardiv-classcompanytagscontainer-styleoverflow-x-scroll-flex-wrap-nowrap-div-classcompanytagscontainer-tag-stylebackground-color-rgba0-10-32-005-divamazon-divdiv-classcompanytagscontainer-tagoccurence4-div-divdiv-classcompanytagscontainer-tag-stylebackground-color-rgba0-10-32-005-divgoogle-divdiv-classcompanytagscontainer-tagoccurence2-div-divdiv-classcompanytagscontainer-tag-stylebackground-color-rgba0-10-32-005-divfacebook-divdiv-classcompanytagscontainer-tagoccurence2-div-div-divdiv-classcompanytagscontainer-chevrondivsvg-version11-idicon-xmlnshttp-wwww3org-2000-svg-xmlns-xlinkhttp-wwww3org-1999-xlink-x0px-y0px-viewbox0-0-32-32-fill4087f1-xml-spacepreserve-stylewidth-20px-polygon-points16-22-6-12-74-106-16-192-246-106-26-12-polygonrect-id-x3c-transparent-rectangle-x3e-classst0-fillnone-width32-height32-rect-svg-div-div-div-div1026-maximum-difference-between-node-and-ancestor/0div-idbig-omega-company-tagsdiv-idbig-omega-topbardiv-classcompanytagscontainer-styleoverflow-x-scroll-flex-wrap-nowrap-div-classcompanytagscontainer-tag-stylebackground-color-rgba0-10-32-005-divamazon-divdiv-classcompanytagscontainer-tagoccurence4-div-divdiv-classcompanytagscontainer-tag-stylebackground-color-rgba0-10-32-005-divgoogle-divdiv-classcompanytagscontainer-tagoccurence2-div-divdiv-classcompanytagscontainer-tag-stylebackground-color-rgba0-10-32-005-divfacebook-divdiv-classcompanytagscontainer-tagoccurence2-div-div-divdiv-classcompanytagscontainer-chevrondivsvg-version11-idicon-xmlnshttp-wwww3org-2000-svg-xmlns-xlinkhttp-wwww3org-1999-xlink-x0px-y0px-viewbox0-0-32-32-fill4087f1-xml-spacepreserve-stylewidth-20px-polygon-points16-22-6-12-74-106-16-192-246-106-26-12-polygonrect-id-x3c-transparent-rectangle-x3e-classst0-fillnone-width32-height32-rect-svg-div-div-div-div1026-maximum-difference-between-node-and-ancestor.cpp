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
    int leaf(TreeNode* root,int maxi,int mini)
    {
        if(root==NULL)
        {
            return maxi-mini;
        }
        maxi=max(maxi,root->val);
        mini=min(mini,root->val);
        int a=leaf(root->left,maxi,mini);
        int b=leaf(root->right,maxi,mini);
        return max(a,b);
    }
    int maxAncestorDiff(TreeNode* root) 
    {
        int maxi=INT_MIN,mini=INT_MAX; 
        return leaf(root,maxi,mini);
    }
};

