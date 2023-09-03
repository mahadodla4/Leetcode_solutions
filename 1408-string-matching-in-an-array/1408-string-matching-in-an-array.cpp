class Solution {
public:
    vector<string> stringMatching(vector<string>& words) 
    {
        set<string>l;
        vector<string>m;
        int i,j;
        for(i=0; i<words.size(); i++)
        {
            for(j=0; j<words.size(); j++)
            {
                if(words[i]!=words[j] and (words[j].find(words[i])!=-1))
                {
                    l.insert(words[i]);
                }
            }
        }
        for(auto i:l)
        {
            m.push_back(i);
        }
        return m;
    }
};