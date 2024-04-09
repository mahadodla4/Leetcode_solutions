class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) 
    {
        int n=tickets.size();
        int ans=0;
        while(1)
        {
            for(int i=0; i<n; i++)
            {
                if(tickets[i]>0)
                {
                    tickets[i]--;
                    ans++;
                }
                if(i==k and tickets[i]==0)
                {
                    return ans;
                }
            }
        }
        return 0;
    }
};