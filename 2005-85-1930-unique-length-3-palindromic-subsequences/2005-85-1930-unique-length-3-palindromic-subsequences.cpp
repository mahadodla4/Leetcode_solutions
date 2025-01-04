class Solution {
public:
    int countPalindromicSubsequence(string s) {
        map<char,vector<int>>mp;
        for(int i=0; i<s.size(); i++) {
            mp[s[i]].push_back(i);
        }
        int ans=0;
        for(auto i:mp) {
            vector<int>ind=i.second;
            int s1=ind[0];
            int e=ind[ind.size()-1];
            if(e-s1<=1) {
                continue;
            }
            else {
                map<char,int>mp1;
                for(int i=s1+1; i<e; i++) {
                    mp1[s[i]]++;
                }
                ans+=mp1.size();
            }
        }
        return ans;
    }
};