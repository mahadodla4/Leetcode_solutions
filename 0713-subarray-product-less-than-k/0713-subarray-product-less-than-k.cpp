class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        if(k<=1)
        {
            return 0;
        }
        int i=0,j=0,c=0,n=nums.size(),pro=1;
        while(i<n)
        {
            pro*=nums[i];
            while(pro>=k)
            {
                pro/=nums[j];
                j++;
            }
            c+=(i-j+1);
            i++;
        }
        return c;
    }
};