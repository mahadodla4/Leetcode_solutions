class Solution {
public:
    int findMiddleIndex(vector<int>& nums) 
    {
        int n=size(nums),i;
        int pref[n];
        int suf[n];
        pref[0]=nums[0];
        suf[n-1]=nums[n-1];
        for(i=1; i<n; i++)
        {
            pref[i]=pref[i-1]+nums[i];
        }
        for(i=n-2; i>=0; i--)
        {
            suf[i]=suf[i+1]+nums[i];
        }
        for(i=0; i<n; i++)
        {
            if(pref[i]==suf[i])
            {
                return i;
            }
        }
        return -1;
    }
};