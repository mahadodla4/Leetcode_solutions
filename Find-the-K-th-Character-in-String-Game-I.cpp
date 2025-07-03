class Solution {
public:
    char kthCharacter(int k) {
        string s="a";
        while(s.size()<k) {
            int n=s.size();
            for(int i=0; i<n; i++) {
                char val='a'+((s[i]-'a'+1)%26);
                s+=val;
            }
        }
        return s[k-1];
    }
};

// a - ab
// ab - abbc
// abbc - abbcbccd
// abbcbccd - abbcbccdbccdcdde