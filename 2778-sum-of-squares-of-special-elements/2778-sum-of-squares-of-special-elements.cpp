class Solution {
public:
    int sumOfSquares(vector<int>& nums) 
    {
        vector<int>l;
        int i,n=nums.size(),sum=0;
        for(i=0; i<n; i++)
        {
            if(n%(i+1)==0)
            {
                l.push_back(nums[i]);
            }
        }
        for(auto i:l)
        {
            sum=sum+(i*i);
        }
        return sum;
    }
};