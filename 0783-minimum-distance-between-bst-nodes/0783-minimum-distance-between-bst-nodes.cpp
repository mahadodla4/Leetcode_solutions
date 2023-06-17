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
    void inorder(TreeNode* root,vector<int>&l)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,l);
        l.push_back(root->val);
        inorder(root->right,l);
    }
    int minDiffInBST(TreeNode* root) 
    {
        vector<int>l;
        vector<int>m;
        inorder(root,l);
        int min=INT_MAX;
        for(int i=1; i<l.size(); i++)
        {
            int a=(l[i]-l[i-1]);
            if(min>a)
            {
                min=a;
            }
        }
        return min;
    }
};