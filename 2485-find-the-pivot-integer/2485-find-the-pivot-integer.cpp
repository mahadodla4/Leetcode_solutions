class Solution {
public:
    int pivotInteger(int n) 
    {
        int pref[n];
        int suf[n];
        pref[0]=1;
        suf[n-1]=n;
        for(int i=1; i<n; i++)
        {
            pref[i]=pref[i-1]+(i+1);
        }
        for(int i=n-2; i>=0; i--)
        {
            suf[i]=suf[i+1]+(i+1);
        }
        for(int i=0; i<n; i++)
        {
            if(pref[i]==suf[i])
            {
                return i+1;
            }
        }
        return -1;
    }
};