class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int>l;
        for(int i=0; i<size(nums); i++)
        {
            if(nums[i]==target)
            {
                l.push_back(i);
            }
        }
        if(size(l)==1)
        {
            return {l[0],l[0]};
        }
        if(size(l)==0)
        {
            return {-1,-1};
        }
        sort(l.begin(),l.end());
        return {l[0],l[size(l)-1]};    
    }
};