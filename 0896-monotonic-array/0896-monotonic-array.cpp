class Solution {
public:
    bool isMonotonic(vector<int>& nums) 
    {
        int i,n=size(nums);
        for(i=0; i<size(nums)-1; i++)
        {
            if(nums[i]<=nums[i+1])
            {
                continue;
            }
            else
            {
                break;
            }
        }
        if(i==n-1)
        {
            return true;
        }
        for(i=0; i<size(nums)-1; i++)
        {
            if(nums[i]>=nums[i+1])
            {
                continue;
            }
            else
            {
                break;
            }
        }
        if(i==n-1)
        {
            return true;
        }
        return false;
    }
};