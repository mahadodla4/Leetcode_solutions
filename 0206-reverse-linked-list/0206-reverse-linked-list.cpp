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
    ListNode* reverseList(ListNode* head) 
    {
        ListNode *temp=head;
        vector<int>vec;
        while(temp)
        {
            vec.push_back(temp->val);
            temp=temp->next;
        }
        reverse(vec.begin(),vec.end());
        ListNode* head1=NULL;
        ListNode* tail=head1;
        for(int i=0; i<vec.size(); i++)
        {
            ListNode* nn=new ListNode(vec[i]);
            if(head1==NULL)
            {
                head1=nn;
                tail=head1;
            }
            else
            {
                tail->next=nn;
                tail=tail->next;
            }
        }
        return head1;
        
    }
};