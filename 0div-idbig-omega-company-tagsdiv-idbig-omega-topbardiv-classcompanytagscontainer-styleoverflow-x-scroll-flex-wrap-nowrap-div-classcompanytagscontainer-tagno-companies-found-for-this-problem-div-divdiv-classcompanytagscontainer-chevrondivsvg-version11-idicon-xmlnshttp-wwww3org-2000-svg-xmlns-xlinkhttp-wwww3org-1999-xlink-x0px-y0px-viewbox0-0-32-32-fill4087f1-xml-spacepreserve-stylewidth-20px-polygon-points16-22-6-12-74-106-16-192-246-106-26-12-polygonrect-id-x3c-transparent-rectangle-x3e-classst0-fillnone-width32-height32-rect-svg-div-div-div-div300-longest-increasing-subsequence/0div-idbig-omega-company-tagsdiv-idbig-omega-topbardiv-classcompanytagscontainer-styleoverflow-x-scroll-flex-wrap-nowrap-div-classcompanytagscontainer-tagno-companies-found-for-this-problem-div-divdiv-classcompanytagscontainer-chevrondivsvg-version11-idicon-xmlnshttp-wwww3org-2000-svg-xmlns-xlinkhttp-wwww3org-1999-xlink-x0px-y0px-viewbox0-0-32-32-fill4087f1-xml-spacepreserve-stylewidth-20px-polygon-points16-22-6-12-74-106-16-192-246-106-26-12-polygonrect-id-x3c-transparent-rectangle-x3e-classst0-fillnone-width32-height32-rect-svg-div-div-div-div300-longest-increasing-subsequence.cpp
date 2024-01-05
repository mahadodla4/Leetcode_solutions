class Solution {
public:
    int lengthOfLIS(vector<int>& nums) 
    {
        vector<int>l;
        int n=nums.size();
        l.push_back(nums[0]);
        for(int i=1; i<n; i++)
        {
            if(l.back()<nums[i])
            {
                l.push_back(nums[i]);
            }
            int ind=lower_bound(l.begin(),l.end(),nums[i])-l.begin();
            l[ind]=nums[i];
        }
        return l.size();
    }
};


