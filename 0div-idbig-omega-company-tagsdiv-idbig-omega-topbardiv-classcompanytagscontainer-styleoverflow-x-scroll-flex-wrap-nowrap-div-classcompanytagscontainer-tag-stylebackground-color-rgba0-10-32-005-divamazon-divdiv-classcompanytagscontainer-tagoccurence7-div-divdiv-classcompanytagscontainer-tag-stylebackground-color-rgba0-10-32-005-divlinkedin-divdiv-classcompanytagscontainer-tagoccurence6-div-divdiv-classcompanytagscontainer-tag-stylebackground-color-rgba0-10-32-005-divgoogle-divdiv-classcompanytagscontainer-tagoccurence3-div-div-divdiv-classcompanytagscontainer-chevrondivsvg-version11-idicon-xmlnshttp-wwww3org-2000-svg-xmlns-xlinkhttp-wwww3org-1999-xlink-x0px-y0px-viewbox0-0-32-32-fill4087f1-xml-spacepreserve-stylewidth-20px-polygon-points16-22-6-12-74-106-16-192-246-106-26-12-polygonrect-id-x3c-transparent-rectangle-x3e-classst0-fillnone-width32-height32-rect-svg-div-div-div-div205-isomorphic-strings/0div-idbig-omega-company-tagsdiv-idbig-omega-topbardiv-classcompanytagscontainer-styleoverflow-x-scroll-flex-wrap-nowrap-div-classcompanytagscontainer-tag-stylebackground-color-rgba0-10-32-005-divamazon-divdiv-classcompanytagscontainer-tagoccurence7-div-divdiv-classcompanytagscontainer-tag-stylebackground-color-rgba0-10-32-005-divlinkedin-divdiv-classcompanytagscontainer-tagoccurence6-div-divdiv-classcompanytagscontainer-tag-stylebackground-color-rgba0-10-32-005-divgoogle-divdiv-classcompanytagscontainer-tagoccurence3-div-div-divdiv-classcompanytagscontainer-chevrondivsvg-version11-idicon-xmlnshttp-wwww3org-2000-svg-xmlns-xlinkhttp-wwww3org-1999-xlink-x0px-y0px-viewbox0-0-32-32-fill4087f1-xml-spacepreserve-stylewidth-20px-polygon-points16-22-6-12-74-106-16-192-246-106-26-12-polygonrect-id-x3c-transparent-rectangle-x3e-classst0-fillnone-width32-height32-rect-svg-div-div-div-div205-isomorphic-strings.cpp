class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        unordered_map<char,char>mp,mp2;
        for(int i=0; i<s.size(); i++)
        {
            if(mp[s[i]] && mp[s[i]]!=t[i])
            {
                return 0;
            }
            if(mp2[t[i]] && mp2[t[i]]!=s[i])
            {
                return 0;
            }
            mp[s[i]]=t[i];
            mp2[t[i]]=s[i];
        }
        return 1;
    }
};