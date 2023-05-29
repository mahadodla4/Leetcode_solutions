class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        vector<int>l;
        map<int,int>mp;
        int i;
        for(i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for(auto i:mp)
        {
            if(i.second>(size(nums)/3))
            {
                l.push_back(i.first);
            }
        }
        return l;
    }
};