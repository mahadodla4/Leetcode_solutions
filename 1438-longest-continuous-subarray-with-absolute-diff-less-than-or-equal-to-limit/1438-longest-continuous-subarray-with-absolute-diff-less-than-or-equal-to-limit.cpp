class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) 
    {
        int i=0,j=0,res=1,n=nums.size();
        for(i=0; i<n-1; i++)
        {
            if(n-i < res)
            {
                break;
            }
            int maxi=nums[i],mini=nums[i];
            for(j=i+1; j<n; j++)
            {
                mini=min(nums[j],mini);
                maxi=max(nums[j],maxi);
                if(maxi-mini <= limit)
                {
                    res=max(res,j-i+1);
                }
                else
                {
                    break;
                }
            }
        }
        return res;
    }
};