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
    void result(TreeNode* root,vector<int>&l)
    {
        if(root==NULL)
        {
            return;
        }
        result(root->left,l);
        l.push_back(root->val);
        result(root->right,l);
    }
    int rangeSumBST(TreeNode* root, int low, int high) 
    {
        vector<int>l;
        result(root,l);
        int sum=0;
        for(auto i:l)
        {
            if(i>=low and i<=high)
            {
                sum+=i;
            }
        }
       return sum;
    }
};