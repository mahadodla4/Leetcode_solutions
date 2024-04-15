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
    int sumNumbers(TreeNode* root) 
    {
        if(root==NULL)
        {
            return 0;
        }
        int res=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* ans=q.front();
            q.pop();
            if(ans->left==NULL and ans->right==NULL)
            {
                res += ans->val;
            }
            else
            {
                if(ans->left)
                {
                    ans->left->val += (ans->val)*10;
                    q.push(ans->left);
                }
                if(ans->right)
                {
                    ans->right->val += (ans->val)*10;
                    q.push(ans->right);
                }
            }
        }
        return res;
    }
};