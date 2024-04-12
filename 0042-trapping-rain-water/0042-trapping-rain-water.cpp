class Solution {
public:
    int trap(vector<int>&arr) 
    {
        int i,n=arr.size();
        int pref_max[n],suff_max[n];
        pref_max[0]=arr[0];
        suff_max[n-1]=arr[n-1];
        for(i=1; i<n; i++)
        {
            pref_max[i]=max(pref_max[i-1],arr[i]);
        }
        for(i=n-2; i>=0; i--)
        {
            suff_max[i]=max(suff_max[i+1],arr[i]);
        }
        int sum=0;
        for(i=0; i<n; i++)
        {
            int val=min(pref_max[i],suff_max[i]);
            int res=val-arr[i];
            sum+=res;
        }
        return sum;
    }
};
