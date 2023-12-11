class Solution {
public:
    int findSpecialInteger(vector<int>& arr) 
    {
        int n=arr.size();
        int a=n/4;
        map<int,int>mp;
        for(auto i:arr)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            if(i.second>a)
            {
                return i.first;
            }
        }
        return 0;
    }
};