class Solution {
public:
    bool buddyStrings(string s, string goal) 
    {
        int i,c=0;
        if(s.size()!=goal.size())
        {
            return 0;
        }
        if(s==goal)
        {
            unordered_set<char>distinctChars(s.begin(),s.end());
            return distinctChars.size() < s.size();
        }
        vector<int>ind;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]!=goal[i])
            {
                ind.push_back(i);
            }
        }
        if(ind.size()!=2)
        {
            return 0;
        }
        swap(s[ind[0]],s[ind[1]]);
        return s==goal;
    }
};