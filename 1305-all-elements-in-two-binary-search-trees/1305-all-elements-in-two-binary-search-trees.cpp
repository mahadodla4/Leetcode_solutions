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
    void result(TreeNode* root1,vector<int>&res1)
    {
        if(root1==NULL)
        {
            return;
        }
        result(root1->left,res1);
        res1.push_back(root1->val);
        result(root1->right,res1);
    }
    void result1(TreeNode* root2,vector<int>&res2)
    {
        if(root2==NULL)
        {
            return;
        }
        result1(root2->left,res2);
        res2.push_back(root2->val);
        result1(root2->right,res2);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2)
    {
        vector<int>res1;
        vector<int>res2;
        result(root1,res1);
        result1(root2,res2);
        for(auto i:res2)
        {
            res1.push_back(i);
        }
        sort(res1.begin(),res1.end());
        return res1;
    }
};