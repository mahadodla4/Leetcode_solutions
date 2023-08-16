class Solution {
public:
    bool areOccurrencesEqual(string s) 
    {
        map<char,int>mp;
        int a,c=0;
        for(auto i:s)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            a=i.second;
            break;
        }
        for(auto i:mp)
        {
            if(i.second==a)
            {
                c++;
            }
        }
        if(c==mp.size())
        {
            return 1;
        }
        return 0;
    }
};