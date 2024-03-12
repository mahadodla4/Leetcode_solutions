class Solution {
public:
    string customSortString(string order, string s) 
    {
        string res="";
        map<char,int>mp;
        int j;
        for(auto i:s)
        {
            mp[i]++;
        }
        for(auto i:order)
        {
            int val=mp[i];
            for(j=0; j<val; j++)
            {
                res+=i;
                mp[i]--;
            }

        }
        for(auto i:mp)
        {
            int val2=i.second;
            if(val2!=0)
            {
                for(j=0; j<val2; j++)
                {
                    res+=i.first;
                }
            }
        }
        return res;
    }
};