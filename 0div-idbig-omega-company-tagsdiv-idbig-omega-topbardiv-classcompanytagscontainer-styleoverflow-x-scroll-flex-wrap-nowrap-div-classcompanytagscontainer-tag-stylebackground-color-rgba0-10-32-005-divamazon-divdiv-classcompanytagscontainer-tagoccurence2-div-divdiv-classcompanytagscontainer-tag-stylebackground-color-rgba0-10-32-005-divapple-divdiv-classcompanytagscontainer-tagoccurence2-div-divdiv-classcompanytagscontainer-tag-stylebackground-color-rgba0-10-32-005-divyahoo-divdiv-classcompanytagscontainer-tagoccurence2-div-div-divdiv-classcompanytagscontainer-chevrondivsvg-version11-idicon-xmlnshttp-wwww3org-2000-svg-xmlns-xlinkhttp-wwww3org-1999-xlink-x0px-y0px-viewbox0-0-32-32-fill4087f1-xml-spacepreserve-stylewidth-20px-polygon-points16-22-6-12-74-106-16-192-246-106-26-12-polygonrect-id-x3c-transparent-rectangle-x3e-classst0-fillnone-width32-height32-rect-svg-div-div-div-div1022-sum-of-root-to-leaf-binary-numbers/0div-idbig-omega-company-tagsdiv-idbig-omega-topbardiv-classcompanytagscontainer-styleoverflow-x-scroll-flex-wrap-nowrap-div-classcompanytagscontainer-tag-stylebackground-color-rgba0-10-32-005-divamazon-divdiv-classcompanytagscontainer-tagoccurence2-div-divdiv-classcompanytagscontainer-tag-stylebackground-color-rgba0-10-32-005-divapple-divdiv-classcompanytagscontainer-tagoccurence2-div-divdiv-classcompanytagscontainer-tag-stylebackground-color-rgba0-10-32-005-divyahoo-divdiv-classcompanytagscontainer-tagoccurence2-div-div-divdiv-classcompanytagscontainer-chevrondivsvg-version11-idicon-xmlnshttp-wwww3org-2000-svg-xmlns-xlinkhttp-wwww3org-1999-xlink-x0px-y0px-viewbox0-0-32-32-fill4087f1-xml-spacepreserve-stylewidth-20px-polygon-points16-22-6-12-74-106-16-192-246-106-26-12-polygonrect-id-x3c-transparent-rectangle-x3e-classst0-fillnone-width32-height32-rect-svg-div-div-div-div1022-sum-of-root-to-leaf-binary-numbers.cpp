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
    void preorder(TreeNode* root,vector<string>&l,string str)
    {
        if(root==NULL)
        {
            return;
        }
        str+=to_string(root->val);
        if(!root->left and !root->right)
        {
            l.push_back(str);
            return;
        }
        preorder(root->left,l,str);
        preorder(root->right,l,str);
    }
    int sumRootToLeaf(TreeNode* root) 
    {
        vector<string>l;
        string str="";
        preorder(root,l,str);
        int sum=0;
        for(auto i:l)
        {
            sum+=stoi(i,0,2);
        }
        return sum;
    }
};