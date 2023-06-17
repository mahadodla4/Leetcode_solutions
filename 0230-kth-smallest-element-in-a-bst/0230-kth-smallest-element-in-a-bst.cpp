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
    int kthSmallest(TreeNode* root, int k) 
    {
        vector<int>l;
        inorder(root,l);
        for(auto i:l)
        {
            cout<<i<<" ";
        }
        int a=l[k-1];
        return a;
    }
};