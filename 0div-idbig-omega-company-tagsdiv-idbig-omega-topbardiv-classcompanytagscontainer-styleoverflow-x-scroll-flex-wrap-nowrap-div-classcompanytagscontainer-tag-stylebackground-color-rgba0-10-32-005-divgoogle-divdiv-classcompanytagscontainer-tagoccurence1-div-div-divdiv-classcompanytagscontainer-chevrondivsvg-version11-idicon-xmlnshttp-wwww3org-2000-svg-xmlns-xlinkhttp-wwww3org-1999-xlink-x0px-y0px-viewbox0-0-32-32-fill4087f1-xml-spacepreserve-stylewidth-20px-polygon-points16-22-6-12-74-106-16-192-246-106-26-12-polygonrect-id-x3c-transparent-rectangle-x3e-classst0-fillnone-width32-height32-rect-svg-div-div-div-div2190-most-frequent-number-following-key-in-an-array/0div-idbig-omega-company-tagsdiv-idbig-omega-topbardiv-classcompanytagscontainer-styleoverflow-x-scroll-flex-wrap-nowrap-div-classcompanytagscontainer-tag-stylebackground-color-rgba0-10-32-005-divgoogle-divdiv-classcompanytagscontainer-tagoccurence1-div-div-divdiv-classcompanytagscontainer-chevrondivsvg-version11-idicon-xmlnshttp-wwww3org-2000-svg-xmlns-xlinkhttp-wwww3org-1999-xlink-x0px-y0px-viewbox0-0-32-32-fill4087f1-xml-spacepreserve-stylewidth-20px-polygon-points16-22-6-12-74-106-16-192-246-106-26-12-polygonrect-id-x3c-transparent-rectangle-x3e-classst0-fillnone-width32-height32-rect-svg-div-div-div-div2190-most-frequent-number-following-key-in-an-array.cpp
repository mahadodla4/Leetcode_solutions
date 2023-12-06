class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) 
    {
        map<int,int>mp;
        priority_queue<pair<int,int>>pq;
        int i,n=nums.size();
        for(i=1; i<n; i++)
        {
            int target=nums[i];
            if(nums[i]==target and nums[i-1]==key)
            {
                mp[target]++;
            }
        }
        for(auto i:mp)
        {
            pq.push({i.second,i.first});
        }
        int a=pq.top().second;
        return a;
    }
};