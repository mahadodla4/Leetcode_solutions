class Solution {
public:
    int dp[10001];
    int spoiler(int n,int val,vector<int>&arr)
    {
        if(val==0)
        {
            return 0;
        }
        if(dp[val]!=-1)
        {
            return dp[val];
        }
        int ans=INT_MAX;
        for(int i=0; i<n; i++)
        {
            if(arr[i]<=val)
            {
                ans=min(ans,1+spoiler(n,val-arr[i],arr));
            }
        }
        return dp[val]=ans;
    }
    int numSquares(int n) 
    {
        int i,a;
        vector<int>nums;
        a=sqrt(n);
        for(i=1; i<=a; i++)
        {
            nums.push_back(i*i);
        }
        memset(dp,-1,sizeof(dp));
        int res=spoiler(a,n,nums);
        return res;
    }
};