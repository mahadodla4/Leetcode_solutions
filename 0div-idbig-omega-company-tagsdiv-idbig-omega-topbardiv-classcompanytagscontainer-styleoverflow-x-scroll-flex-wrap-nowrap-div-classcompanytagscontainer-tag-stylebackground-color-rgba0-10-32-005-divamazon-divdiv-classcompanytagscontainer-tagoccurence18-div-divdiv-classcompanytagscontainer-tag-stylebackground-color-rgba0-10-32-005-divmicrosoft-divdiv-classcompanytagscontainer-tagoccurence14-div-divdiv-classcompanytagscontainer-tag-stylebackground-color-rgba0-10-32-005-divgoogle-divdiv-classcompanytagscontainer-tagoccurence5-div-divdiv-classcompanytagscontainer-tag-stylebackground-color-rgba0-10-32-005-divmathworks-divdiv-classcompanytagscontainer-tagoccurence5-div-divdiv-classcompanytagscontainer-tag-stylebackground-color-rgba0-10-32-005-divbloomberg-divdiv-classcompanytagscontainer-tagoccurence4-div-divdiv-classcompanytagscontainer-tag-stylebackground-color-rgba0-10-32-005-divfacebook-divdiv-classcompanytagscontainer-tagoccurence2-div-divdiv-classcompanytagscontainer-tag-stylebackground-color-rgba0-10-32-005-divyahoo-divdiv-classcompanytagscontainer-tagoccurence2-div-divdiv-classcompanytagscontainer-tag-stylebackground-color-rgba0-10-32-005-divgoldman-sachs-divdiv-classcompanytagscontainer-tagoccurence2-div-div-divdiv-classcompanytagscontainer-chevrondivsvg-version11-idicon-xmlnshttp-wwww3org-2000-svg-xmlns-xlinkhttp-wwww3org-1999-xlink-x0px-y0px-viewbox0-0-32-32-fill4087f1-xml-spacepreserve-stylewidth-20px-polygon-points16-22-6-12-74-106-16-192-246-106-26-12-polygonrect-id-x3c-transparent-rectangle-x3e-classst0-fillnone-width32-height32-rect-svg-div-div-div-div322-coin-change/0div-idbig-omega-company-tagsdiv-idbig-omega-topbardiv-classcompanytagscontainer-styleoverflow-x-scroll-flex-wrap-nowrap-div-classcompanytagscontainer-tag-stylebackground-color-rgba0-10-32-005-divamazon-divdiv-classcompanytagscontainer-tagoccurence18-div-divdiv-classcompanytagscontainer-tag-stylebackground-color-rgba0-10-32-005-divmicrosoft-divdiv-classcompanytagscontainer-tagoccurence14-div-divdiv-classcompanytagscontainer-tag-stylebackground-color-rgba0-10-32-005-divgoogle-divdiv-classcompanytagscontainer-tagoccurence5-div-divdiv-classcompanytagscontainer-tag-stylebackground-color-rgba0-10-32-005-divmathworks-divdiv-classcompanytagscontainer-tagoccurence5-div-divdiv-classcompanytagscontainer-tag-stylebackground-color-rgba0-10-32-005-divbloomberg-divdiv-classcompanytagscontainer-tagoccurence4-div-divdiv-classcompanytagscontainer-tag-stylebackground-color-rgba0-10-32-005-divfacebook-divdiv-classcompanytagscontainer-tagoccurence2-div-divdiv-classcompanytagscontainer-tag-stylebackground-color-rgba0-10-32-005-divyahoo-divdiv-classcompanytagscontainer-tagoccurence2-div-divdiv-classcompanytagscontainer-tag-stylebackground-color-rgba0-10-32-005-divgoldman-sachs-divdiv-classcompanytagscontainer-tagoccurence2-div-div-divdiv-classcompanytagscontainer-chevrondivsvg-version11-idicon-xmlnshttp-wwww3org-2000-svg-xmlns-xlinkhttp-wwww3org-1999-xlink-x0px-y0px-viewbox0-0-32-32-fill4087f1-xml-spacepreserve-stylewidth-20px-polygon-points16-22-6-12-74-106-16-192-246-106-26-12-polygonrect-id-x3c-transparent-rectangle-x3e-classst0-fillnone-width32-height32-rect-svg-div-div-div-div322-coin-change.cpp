class Solution {
public:
    int dp[100001];
    int spoiler(vector<int>&coins,int n,int val)
    {
        if(val==0)
        {
            return 0;
        }
        if(dp[val]!=-1)
        {
            return dp[val];
        }
        int ans=INT_MAX-1;
        for(int i=0; i<n; i++)
        {
            if(coins[i]<=val)
            {
                ans=min(ans,1+spoiler(coins,n,val-coins[i]));
            }
        }
        return dp[val]=ans;
    }
    int coinChange(vector<int>& coins, int val) 
    {
        int n=coins.size();
        memset(dp,-1,sizeof(dp));
        int res=spoiler(coins,n,val);
        if(res>=2147483646)
        {
            return -1;
        }
        return res;
    }
};