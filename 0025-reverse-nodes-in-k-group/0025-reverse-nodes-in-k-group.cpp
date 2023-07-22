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
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        ListNode* temp=head;
        vector<int>vec;
        while(temp)
        {
            vec.push_back(temp->val);
            temp=temp->next;
        }
        int i=0,n=vec.size();
        while(i<n)
        {
            int size=i+k;
            if(size<=n)
            {
                reverse(vec.begin()+i,vec.begin()+size);
            }
            i=size;
        }
        ListNode* head1=NULL;
        ListNode* tail=head1;
        for(i=0; i<n; i++)
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