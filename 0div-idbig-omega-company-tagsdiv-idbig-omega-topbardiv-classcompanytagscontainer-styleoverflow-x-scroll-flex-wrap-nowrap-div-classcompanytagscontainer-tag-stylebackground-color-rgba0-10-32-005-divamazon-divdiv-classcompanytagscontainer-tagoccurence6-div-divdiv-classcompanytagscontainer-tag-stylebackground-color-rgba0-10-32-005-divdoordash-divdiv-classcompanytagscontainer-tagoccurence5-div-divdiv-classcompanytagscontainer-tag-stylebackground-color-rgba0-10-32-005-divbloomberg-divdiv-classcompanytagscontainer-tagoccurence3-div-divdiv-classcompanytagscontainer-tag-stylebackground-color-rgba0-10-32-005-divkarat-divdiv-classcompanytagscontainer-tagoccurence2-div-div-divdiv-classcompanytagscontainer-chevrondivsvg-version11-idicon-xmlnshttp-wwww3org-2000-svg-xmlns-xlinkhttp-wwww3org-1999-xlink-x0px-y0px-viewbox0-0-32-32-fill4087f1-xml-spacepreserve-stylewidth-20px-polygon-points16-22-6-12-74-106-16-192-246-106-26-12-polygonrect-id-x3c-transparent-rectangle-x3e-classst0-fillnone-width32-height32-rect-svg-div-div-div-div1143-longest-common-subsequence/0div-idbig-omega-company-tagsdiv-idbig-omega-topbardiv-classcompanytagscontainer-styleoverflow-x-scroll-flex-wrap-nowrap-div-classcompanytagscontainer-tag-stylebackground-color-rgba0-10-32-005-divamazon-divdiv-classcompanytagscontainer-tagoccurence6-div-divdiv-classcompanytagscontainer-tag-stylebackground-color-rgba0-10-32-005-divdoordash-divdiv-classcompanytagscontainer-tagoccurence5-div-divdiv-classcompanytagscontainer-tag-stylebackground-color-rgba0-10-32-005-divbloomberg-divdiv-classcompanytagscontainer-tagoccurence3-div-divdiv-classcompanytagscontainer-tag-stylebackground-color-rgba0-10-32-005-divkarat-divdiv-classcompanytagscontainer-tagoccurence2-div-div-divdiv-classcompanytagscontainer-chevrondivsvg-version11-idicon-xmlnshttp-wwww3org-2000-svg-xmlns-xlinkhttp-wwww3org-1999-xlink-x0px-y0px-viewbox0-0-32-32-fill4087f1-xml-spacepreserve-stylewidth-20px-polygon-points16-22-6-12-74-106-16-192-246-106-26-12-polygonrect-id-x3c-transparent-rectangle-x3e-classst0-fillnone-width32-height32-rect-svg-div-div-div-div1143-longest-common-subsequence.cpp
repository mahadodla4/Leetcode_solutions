class Solution {
public:
    int c=0;
    int spoiler(string &text1,string &text2,int i1,int i2,int n,int m,vector<vector<int>>&dp)
    {
        if(i1>=n or i2>=m)
        {
            return 0;
        }
        if(dp[i1][i2]!=-1)
        {
            return dp[i1][i2];
        }
        if(text1[i1]==text2[i2])
        {
            dp[i1][i2]=1+spoiler(text1,text2,i1+1,i2+1,n,m,dp);
        }
        else
        {
            dp[i1][i2]=max(spoiler(text1,text2,i1+1,i2,n,m,dp),spoiler(text1,text2,i1,i2+1,n,m,dp));
        }
        
        return dp[i1][i2];
    }
    int longestCommonSubsequence(string text1, string text2) 
    {
        int n=text1.size(),m=text2.size();
        int size=max(n,m)+1;
        vector<vector<int>>dp(size,vector<int>(size,-1));
        return spoiler(text1,text2,0,0,n,m,dp);
        
    }
};