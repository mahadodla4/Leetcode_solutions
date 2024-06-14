class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int i,ans=0,prev=nums[0]+1;
        for(i=1; i<nums.size(); i++)
        {
            if(nums[i]<=prev)
            {
                ans+=(prev++ -nums[i]);
            }
            else
            {
                prev=nums[i]+1;
            }
            
        }
        return ans;
    }
};