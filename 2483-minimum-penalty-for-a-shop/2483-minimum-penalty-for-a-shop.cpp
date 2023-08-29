class Solution {
public:
    int bestClosingTime(string customers) 
    {
        int i,n=customers.size();
        vector<int>pref(n+1,0);
        vector<int>suff(n+1,0);
        pref[0]=0;
        for(i=1; i<n+1; i++)
        {
            if(customers[i-1]=='N')
            {
                pref[i]=pref[i-1]+1;
            }
            else
            {
                pref[i]=pref[i-1];
            }
        }
        suff[n]=0;
        for(i=n-1; i>=0; i--)
        {
            if(customers[i]=='Y')
            {
                suff[i]=suff[i+1]+1;
            }
            else
            {
                suff[i]=suff[i+1];
            }
        }
        int ind=0,min=INT_MAX;
        for(i=0; i<=n; i++)
        {
            int a=pref[i]+suff[i];
            if(a<min)
            {
                min=a;
                ind=i;
            }
        }
        return ind;
    }
};