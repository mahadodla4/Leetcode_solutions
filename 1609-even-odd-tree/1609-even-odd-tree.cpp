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
    bool all_even(vector<int>&p1)
    {
        int c=0;
        for(auto i:p1)
        {
            if(i%2==0)
            {
                c++;
            }
        }
        if(c==p1.size())
        {
            return 1;
        }
        return 0;
    }
    bool all_odd(vector<int>&p2)
    {
        int c=0;
        for(auto i:p2)
        {
            if(i%2!=0)
            {
                c++;
            }
        }
        if(c==p2.size())
        {
            return 1;
        }
        return 0;
    }
    bool isort(vector<int>&p)
    {
        int i,c=0;
        if(p.size()==1)
        {
            return 1;
        }
        for(i=0; i<p.size()-1; i++)
        {
            if(p[i]<p[i+1] and p[i]!=p[i+1])
            {
                c++;
            }
        }
        if(c==p.size()-1)
        {
            return 1;
        }
        return 0;
    }
    bool dsort(vector<int>&q)
    {
        int i,c=0;
        if(q.size()==1)
        {
            return 1;
        }
        for(i=0; i<q.size()-1; i++)
        {
            if(q[i]>q[i+1] and q[i]!=q[i+1])
            {
                c++;
            }
        }
        if(c==q.size()-1)
        {
            return 1;
        }
        return 0;
    }
    bool isEvenOddTree(TreeNode* root) 
    {
        if(root==NULL)
        {
            return 0;
        }
        queue<TreeNode*>q;
        q.push(root);
        int c=0,count=0;
        while(!q.empty())
        {
            vector<int>l;
            int n=q.size();
            for(int i=0; i<n; i++)
            {
                TreeNode* cur=q.front();
                q.pop();
                l.push_back(cur->val);
                if(cur->left!=NULL)
                {
                    q.push(cur->left);
                }
                if(cur->right!=NULL)
                {
                    q.push(cur->right);
                }
            }
            if(c==0 or c%2==0)
            {
                if(!all_odd(l) or !isort(l))
                {
                    return 0;
                }
            }
            if(c%2!=0)
            {
                if(!all_even(l) or !dsort(l))
                {
                    return 0;
                }
            }
            c++;
        }
        return 1;
    }
};