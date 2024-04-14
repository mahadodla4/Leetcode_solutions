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
    void sum_fun(TreeNode* root,int &sum,int &flag)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left==NULL and root->right==NULL and flag==1)
        {
            sum+=root->val;
        }
        flag=1;
        sum_fun(root->left,sum,flag);
        flag=0;
        sum_fun(root->right,sum,flag);
    }
    int sumOfLeftLeaves(TreeNode* root) 
    {
        int sum=0,flag=0;
        sum_fun(root,sum,flag);
        return sum;
    }
};