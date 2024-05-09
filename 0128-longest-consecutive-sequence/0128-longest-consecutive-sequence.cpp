class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        int i,n=nums.size(),c=1,maxi=0;
        if(n==0)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        for(i=1; i<n; i++)
        {
            if(nums[i]!=nums[i-1])
            {
                if(nums[i]==(nums[i-1]+1))
                {
                    c++;
                }
                else
                {
                    maxi=max(maxi,c);
                    c=1;
                }
            }
        }
        return max(c,maxi);
    }
};