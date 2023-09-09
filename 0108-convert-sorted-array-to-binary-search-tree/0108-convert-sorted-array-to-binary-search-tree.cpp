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
    TreeNode* insert(int left,int right,vector<int>&l)
    {
        if(left<=right)
        {
            int mid=(left+right)/2;
            TreeNode* cur=new TreeNode(l[mid]);
            cur->left=insert(left,mid-1,l);
            cur->right=insert(mid+1,right,l);
            return cur;
        }
        return NULL;
    }
    TreeNode* sortedArrayToBST(vector<int>& l) 
    {
        int left=0,right=l.size()-1;
        return insert(left,right,l);
    }
};