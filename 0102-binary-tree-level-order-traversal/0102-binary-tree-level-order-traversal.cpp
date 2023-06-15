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
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        vector<vector<int>>res;
        queue<TreeNode*>q;
        vector<int>vec;
        if(root!=NULL)
        {
            q.push(root);
            vec.push_back(root->val);
            res.push_back(vec);
            vec.clear();
        }
        while(!q.empty())
        {
            int i,n=q.size();
            for(i=0; i<n; i++)
            {
                TreeNode* nodes=q.front();
                q.pop();
                if(nodes->left!=NULL)
                {
                    q.push(nodes->left);
                    vec.push_back(nodes->left->val);
                }
                if(nodes->right!=NULL)
                {
                    q.push(nodes->right);
                    vec.push_back(nodes->right->val);
                }
            }
            if(!vec.empty() && i==n)
            {
                res.push_back(vec);
                vec.clear();
            }
        }
        
        return res;
    }
};