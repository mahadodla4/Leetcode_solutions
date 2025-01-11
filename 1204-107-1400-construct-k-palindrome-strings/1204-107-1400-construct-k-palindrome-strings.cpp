class Solution {
public:
    bool canConstruct(string s, int k) {
        unordered_map<char,int>mp;
        int c=0;
        for(auto i:s) {
            mp[i]++;
        }
        for(auto i:mp) {
            if(i.second%2==1) {
                c++;
            }
        }
        if(c<=k and k<=s.size()) {
            return true;
        }
        return false;
    }
};