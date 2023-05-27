class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        if(size(nums)==1)
        {
            return 0;
        }
        vector<int>l;
        for(int i=1; i<size(nums)-1; i++)
        {
            int a=nums[i];
            if(a>nums[i+1] && a>nums[i-1])
            {
                l.push_back(i);
            }
        }
        if(size(l)==0)
        {
            if(nums[1]<nums[0])
            {
                return 0;
            }
            else
            {
                return nums.size()-1;
            }
        }
        sort(l.begin(),l.end());
        return l[size(l)-1];
    }
};