class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int i,j,ans=0,n=nums.size();
        for(i=0; i<32; i++)
        {
            int count=0;
            for(j=0; j<n; j++)
            {
                if((nums[j]&(1<<i)))
                {
                    count++;
                }
            }
            if(count%3!=0)
            {
                ans=ans|(1<<i);
            }
        }
        return ans;
    }
};