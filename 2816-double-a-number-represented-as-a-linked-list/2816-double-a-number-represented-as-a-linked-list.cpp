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
    ListNode* doubleIt(ListNode* head) 
    {
        ListNode* temp=head;
        vector<long long>l;
        while(temp!=NULL)
        {
            l.push_back(temp->val);
            temp=temp->next;
        }
        reverse(l.begin(),l.end());
        int carry=0;
        vector<int>res;
        for(auto i:l)
        {
            int ones=i;
            int a=(ones*2)+carry;
            ones=a%10;
            carry=a/10;
            res.push_back(ones);
        }
        if(carry!=0)
        {
            res.push_back(carry);
        }
        reverse(res.begin(),res.end());
        ListNode *head1=NULL;
        ListNode *tail=head1;
        for(int i=0; i<res.size(); i++)
        {
            ListNode *nn=new ListNode(res[i]);
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