class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) 
    {
        vector<int>l;
        int i,j,c,n=nums.size(),ans=0;
        for(i=0; i<n; i++)
        {
            sort(nums[i].begin(),nums[i].end());
        }
        for(i=0; i<size(nums[0]); i++)
        {
            int res=0;
            for(j=0; j<size(nums); j++)
            {
                int a=nums[j][i];
                res=max(res,a);
            }
            ans+=res;
        }
        return ans;
    }
};