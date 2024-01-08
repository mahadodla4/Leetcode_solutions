class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) 
    {
        vector<map<long long,long long>>mp(nums.size());
        int i,j,n=nums.size(),ans=0;
        for(i=1; i<n; i++)
        {
            for(j=0; j<i; j++)
            {
                long long a=(long long)nums[i]-nums[j];
                int b = mp[j][a];
                ans+=b;
                mp[i][a]+=b+1;
            }
        }
        return ans;
    }
};