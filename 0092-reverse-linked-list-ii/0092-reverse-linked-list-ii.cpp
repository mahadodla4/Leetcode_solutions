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
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        ListNode* temp=head;
        vector<int>l;
        while(temp)
        {
            l.push_back(temp->val);
            temp=temp->next;
        }
        reverse(l.begin()+left-1,l.begin()+right);
        ListNode* head1=NULL;
        ListNode* tail=head1;
        for(int i=0; i<l.size(); i++)
        {
            ListNode* nn=new ListNode(l[i]);
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