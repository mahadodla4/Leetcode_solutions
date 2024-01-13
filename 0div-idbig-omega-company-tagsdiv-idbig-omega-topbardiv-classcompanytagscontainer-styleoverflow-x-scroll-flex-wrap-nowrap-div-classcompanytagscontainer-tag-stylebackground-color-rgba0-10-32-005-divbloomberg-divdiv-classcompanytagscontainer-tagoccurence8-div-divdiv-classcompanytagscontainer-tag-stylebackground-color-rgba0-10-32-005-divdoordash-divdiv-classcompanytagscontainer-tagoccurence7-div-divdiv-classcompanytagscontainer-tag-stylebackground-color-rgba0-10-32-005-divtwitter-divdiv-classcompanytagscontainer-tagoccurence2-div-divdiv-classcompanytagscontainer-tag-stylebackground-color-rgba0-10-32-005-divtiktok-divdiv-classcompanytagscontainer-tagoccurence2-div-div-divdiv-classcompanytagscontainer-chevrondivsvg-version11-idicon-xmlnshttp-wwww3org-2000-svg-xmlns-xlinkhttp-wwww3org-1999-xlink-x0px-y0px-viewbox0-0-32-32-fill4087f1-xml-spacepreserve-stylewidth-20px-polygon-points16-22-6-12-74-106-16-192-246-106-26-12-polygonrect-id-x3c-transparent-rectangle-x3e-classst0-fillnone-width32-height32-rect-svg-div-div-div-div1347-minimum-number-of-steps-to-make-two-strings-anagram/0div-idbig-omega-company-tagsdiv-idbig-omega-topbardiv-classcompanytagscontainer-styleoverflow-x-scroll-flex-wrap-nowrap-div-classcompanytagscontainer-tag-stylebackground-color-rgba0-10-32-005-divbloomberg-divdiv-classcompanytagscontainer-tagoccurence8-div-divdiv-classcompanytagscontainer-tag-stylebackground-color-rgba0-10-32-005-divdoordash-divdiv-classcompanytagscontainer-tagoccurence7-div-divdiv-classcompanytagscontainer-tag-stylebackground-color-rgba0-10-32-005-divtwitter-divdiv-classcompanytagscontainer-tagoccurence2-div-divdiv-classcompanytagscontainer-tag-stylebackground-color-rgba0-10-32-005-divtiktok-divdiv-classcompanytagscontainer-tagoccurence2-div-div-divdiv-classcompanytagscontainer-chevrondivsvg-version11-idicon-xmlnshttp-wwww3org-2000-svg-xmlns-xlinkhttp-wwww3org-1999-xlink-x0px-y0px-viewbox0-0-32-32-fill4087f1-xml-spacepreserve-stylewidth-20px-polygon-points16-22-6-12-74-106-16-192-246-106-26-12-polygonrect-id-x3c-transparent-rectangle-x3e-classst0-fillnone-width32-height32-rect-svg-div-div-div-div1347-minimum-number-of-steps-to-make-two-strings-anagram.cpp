class Solution {
public:
    int minSteps(string s, string t) 
    {
        map<char,int>mp1;
        map<char,int>mp2;
        for(auto i:s)
        {
            mp1[i]++;
        }
        for(auto i:t)
        {
            mp2[i]++;
        }
        int c=0;
        for(auto i:mp1)
        {
            if(mp2.find(i.first)!=mp2.end())
            {
                if(i.second> mp2[i.first])
                {
                    c+=(i.second-mp2[i.first]);
                }
                else
                {
                    continue;
                }
            }
            else
            {
                c+=i.second;
            }
        }
        return c;
    }
};