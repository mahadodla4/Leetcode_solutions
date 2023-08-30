class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string,vector<string>>mp;
        for(auto i:strs)
        {
            string a=i;
            sort(a.begin(),a.end());
            mp[a].push_back(i);
        }
        vector<vector<string>>vec;
        for(auto i:mp)
        {
            vec.push_back(i.second);
        }
        return vec;

    }
};