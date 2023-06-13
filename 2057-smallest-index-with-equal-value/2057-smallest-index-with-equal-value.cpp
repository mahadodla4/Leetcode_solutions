class Solution {
public:
    int smallestEqual(vector<int>& nums) 
    {
        int i;
        vector<int>l;
        for(i=0; i<nums.size(); i++)
        {
            int a=i;
            if(a%10==nums[a])
            {
                l.push_back(a);
            }
        }
        sort(l.begin(),l.end());
        if(l.size()==0)
        {
            return -1;
        }
        else
        {
            return l[0];
        }
    }
};