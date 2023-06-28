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
    void print(TreeNode* root,vector<int>&l)
    {
        if(root==NULL)
        {
            return;
        }
        print(root->left,l);
        l.push_back(root->val);
        print(root->right,l);
    }
    bool findTarget(TreeNode* root, int k) 
    {
        vector<int>l;
        print(root,l);
        int i=0,j=l.size()-1,n=l.size(),sum=0;
        while(i<j)
        {
            sum=l[i]+l[j];
            if(sum==k)
            {
                return 1;
            }
            else if(sum<k)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return 0;
    }
};