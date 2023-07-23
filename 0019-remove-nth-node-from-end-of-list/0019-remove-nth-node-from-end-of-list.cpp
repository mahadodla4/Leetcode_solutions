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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* temp=head;
        vector<int>l;
        while(temp)
        {
            l.push_back(temp->val);
            temp=temp->next;
        }
        l.erase(l.begin()+(l.size()-n));
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