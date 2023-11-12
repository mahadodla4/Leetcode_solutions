class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) 
    {
        set<char>st;
        int i;
        for(i=0; i<s.size(); i++)
        {
            if(st.find(s[i])!=st.end())
            {
                continue;
            }
            else
            {
                st.insert(s[i]);
                int val=i+distance[s[i]-'a']+1;
                if(val>s.size() or s[val]!=s[i])
                {
                    return 0;
                }
            }
        }
        return 1;
    }
};