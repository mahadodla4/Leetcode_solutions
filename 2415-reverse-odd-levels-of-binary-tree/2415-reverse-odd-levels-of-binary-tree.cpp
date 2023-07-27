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
    TreeNode* reverseOddLevels(TreeNode* root) 
    {
        if(root==NULL)
        {
            return root;
        }
        queue<TreeNode*>q;
        q.push(root);
        int c=0;
        while(!q.empty())
        {
            vector<int>l;
            vector<TreeNode*>v;
            int n=q.size();
            for(int i=0; i<n; i++)
            {
                TreeNode* nodes=q.front();
                q.pop();
                l.push_back(nodes->val);
                v.push_back(nodes);
                if(nodes->left!=NULL)
                {
                    q.push(nodes->left);
                }
                if(nodes->right!=NULL)
                {
                    q.push(nodes->right);
                }
            }
            c++;
            if(c%2==0)
            {
                reverse(l.begin(),l.end());
                for(int i=0; i<v.size(); i++)
                {
                    v[i]->val=l[i];
                }
            }
        }
        return root;
    }
};