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
    ListNode* vec_ll(vector<int>&res)
    {
        ListNode *head=NULL;
        ListNode *tail=NULL;
        for(auto i:res)
        {
            ListNode *nn=new ListNode();
            nn->val=i;
            nn->next=NULL;
            if(head==NULL)
            {
                head=nn;
                tail=nn;
            }
            else
            {
                tail->next=nn;
                tail=nn;
            }
        }
        return head;
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode *temp1=list1;
        ListNode *temp2=list2;
        vector<int>res;
        while(temp1)
        {
            res.push_back(temp1->val);
            temp1=temp1->next;
        }
        while(temp2)
        {
            res.push_back(temp2->val);
            temp2=temp2->next;
        }
        sort(res.begin(),res.end());
        return vec_ll(res);
    }
};