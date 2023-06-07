/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) 
    {
        ListNode *temp;
        temp=head;
        vector<int>nums;
        while(temp)
        {
            nums.push_back(temp->val);
            temp=temp->next;
        }
        int n=nums.size();
        stack<int>st;
        vector<int>b;
        b.push_back(0);
        st.push(nums[n-1]);
        for(int i=n-2; i>=0; i--)
        {
            while(!st.empty() and st.top()<=nums[i])
            {
                st.pop();
            }
            if(!st.empty() and st.top()>nums[i])
            {
                b.push_back(st.top());
            }
            else
            {
                b.push_back(0);
            }
            st.push(nums[i]);
        }
        reverse(b.begin(),b.end());
        return b;
    }
};