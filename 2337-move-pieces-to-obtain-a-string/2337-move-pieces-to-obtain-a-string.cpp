class Solution {
public:
    bool canChange(string s, string t) {
        int n=s.size();
        for(int i=0,j=0; i<n || j<n; i++,j++) {
            while(i<n and s[i]=='_') {
                i++;
            }
            while(j<n and t[j]=='_') {
                j++;
            }
            if(s[i]!=t[j]) {
                return 0;
            }
            if(s[i]=='L' and i<j) {
                return 0;
            }
            if(s[i]=='R' and i>j) {
                return 0;
            }
        }
        return 1;
    }
};