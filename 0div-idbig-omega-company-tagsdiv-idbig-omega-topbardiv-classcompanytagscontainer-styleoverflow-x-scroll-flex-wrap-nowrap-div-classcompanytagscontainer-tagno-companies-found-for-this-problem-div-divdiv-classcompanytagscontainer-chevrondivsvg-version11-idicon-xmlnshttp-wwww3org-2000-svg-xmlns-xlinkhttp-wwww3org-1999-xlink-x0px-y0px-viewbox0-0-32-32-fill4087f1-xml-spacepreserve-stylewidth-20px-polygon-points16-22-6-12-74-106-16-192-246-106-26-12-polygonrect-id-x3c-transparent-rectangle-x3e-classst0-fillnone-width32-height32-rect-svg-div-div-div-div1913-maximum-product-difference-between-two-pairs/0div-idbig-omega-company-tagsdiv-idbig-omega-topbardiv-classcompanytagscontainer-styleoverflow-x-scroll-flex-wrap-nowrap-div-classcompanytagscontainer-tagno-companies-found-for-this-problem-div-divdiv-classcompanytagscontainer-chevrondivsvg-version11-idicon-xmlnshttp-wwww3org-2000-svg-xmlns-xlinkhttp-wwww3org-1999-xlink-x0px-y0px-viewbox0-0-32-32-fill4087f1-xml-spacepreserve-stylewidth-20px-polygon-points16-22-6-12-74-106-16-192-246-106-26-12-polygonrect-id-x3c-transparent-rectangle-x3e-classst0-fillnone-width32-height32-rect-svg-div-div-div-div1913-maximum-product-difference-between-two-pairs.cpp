class Solution {
public:
    int maxProductDifference(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int a=nums[0];
        int b=nums[1];
        sort(nums.rbegin(),nums.rend());
        int c=nums[0];
        int d=nums[1];
        int res=(c*d)-(a*b);
        return res;
    }
};