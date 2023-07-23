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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        ListNode* temp=head;
        set<int>s;
        vector<int>l;
        map<int,int>mp;
        while(temp)
        {
            mp[temp->val]++;
            temp=temp->next;
        }
        for(auto i:mp)
        {
            if(i.second==1)
            {
                l.push_back(i.first);
            }
        }
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