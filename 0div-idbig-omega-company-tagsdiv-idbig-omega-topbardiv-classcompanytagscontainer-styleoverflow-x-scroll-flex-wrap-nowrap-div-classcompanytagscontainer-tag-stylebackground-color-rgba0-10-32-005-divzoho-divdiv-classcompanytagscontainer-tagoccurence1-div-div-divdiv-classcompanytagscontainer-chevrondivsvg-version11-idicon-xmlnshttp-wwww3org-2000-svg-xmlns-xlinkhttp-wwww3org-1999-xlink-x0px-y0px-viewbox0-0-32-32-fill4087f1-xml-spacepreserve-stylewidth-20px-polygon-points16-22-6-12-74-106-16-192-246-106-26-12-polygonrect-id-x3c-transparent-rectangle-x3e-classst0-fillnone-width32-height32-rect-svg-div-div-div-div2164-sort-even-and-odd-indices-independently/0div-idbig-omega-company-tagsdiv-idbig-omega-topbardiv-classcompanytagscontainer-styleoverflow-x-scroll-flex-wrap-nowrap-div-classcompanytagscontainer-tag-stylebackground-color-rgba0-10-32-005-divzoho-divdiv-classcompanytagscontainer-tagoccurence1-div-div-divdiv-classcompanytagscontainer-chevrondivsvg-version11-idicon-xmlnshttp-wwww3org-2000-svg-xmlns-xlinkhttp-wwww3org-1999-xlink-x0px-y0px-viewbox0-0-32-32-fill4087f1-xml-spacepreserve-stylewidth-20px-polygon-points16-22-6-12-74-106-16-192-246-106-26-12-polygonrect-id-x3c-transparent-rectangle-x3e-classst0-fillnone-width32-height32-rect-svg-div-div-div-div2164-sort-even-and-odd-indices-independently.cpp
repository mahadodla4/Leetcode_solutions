class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) 
    {
        vector<int>l;
        vector<int>m;
        int n=nums.size();
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                l.push_back(nums[i]);
            }
            if(i%2!=0)
            {
                m.push_back(nums[i]);
            }
        }
        sort(l.begin(),l.end());
        sort(m.rbegin(),m.rend());
        for(auto i:l)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        for(auto i:m)
        {
            cout<<i<<" ";
        }
        vector<int>res;
        int ls=l.size(),ms=m.size();
        int i=0,j=1,k=0;
        for(i=0; i<n/2; i++)
        {
            res.push_back(l[i]);
            res.push_back(m[i]);
        }
        if(n%2!=0)
        {
            res.push_back(l[ls-1]);
        }
        return res;
    }
};