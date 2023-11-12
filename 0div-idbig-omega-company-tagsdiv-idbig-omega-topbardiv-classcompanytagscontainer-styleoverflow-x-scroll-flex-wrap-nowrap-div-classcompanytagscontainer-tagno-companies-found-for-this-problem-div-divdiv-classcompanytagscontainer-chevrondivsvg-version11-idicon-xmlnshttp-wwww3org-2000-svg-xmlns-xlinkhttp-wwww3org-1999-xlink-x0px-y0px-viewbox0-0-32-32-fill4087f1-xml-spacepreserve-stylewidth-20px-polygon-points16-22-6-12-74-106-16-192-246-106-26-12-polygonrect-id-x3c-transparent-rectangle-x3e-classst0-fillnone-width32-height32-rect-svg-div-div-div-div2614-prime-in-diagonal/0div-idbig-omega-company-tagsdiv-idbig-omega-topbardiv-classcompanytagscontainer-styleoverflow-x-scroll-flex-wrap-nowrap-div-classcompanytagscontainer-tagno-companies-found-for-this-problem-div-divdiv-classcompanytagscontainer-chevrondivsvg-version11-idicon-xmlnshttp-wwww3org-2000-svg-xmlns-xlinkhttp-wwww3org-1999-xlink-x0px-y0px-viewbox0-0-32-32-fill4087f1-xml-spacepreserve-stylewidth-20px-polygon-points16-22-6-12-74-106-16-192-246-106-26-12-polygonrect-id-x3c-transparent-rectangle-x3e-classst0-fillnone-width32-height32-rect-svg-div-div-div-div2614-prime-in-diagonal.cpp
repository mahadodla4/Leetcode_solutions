class Solution {
public:
    bool prime(int p)
    {
        if(p==1)
        {
            return 0;
        }
        for(int i=2; i<=sqrt(p); i++)
        {
            if(p%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
    int diagonalPrime(vector<vector<int>>& nums) 
    {
        int i,j,n=nums.size();
        vector<int>l;
        for(i=0; i<nums.size(); i++)
        {
            for(j=0; j<nums[i].size(); j++)
            {
                if(i==j or i+j==n-1)
                {
                    if(prime(nums[i][j]))
                    {
                        l.push_back(nums[i][j]);
                    }
                }
            }
        }
        sort(l.rbegin(),l.rend());
        if(l.size()==0)
        {
            return 0;
        }
        return l[0];
    }
};