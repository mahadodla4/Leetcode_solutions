class Solution {
public:
    int rob(vector<int>& nums) 
    {
        int cur=0,prev=0,temp;
        for(auto i:nums)
        {
            temp=max(prev+i,cur);
            prev=cur;
            cur=temp;
        }
        return cur;
    }
};