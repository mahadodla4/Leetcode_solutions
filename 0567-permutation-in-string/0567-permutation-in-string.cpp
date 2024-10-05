class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        vector<int>s1_c(26,0),s2_c(26,0);
        int i;
        for(i=0; i<s1.size(); i++)
        {
            s1_c[s1[i]-'a']++;
            s2_c[s2[i]-'a']++;
        }
        for(i=0; i<s2.size()-s1.size(); i++)
        {
            if(s1_c==s2_c) return true;
            s2_c[s2[i]-'a']--;
            s2_c[s2[i+s1.size()]-'a']++;
        }
        return s1_c==s2_c;
    }
};