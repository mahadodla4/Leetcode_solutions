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
    int getDecimalValue(ListNode* head) 
    {
        ListNode* temp=head;
        vector<int>l;
        int i=0,sum=0;
        while(temp!=NULL)
        {
            l.push_back(temp->val);
            temp=temp->next;
        }
        reverse(l.begin(),l.end());
        while(i<l.size())
        {
            int a=pow(2,i)*l[i];
            sum+=a;
            i++;
        }
        return sum;
    }
};