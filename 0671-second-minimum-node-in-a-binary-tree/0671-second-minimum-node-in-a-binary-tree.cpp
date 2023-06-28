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
    void print(TreeNode* root,set<int>&s)
    {
        if(root==NULL)
        {
            return;
        }
        print(root->left,s);
        s.insert(root->val);
        print(root->right,s);
    }
    int findSecondMinimumValue(TreeNode* root) 
    {
        if(root==NULL)
        {
            return 0;
        }
        set<int>s;
        print(root,s);
        if(s.size()<2)
        {
            return -1;
        }
        auto it=s.begin();
        for(int i=0; i<1; i++)
        {
            it++;
        }
        return *it;
    }
};