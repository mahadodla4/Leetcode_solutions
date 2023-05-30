class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        int i;
        map<int,int>mp;
        set<int>s;
        for(i=0; i<arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        for(auto i:mp)
        {
            s.insert(i.second);
        }
       if(size(mp)==size(s))
       {
           return true;
       }
       else
       {
           return false;
       }
    }
};