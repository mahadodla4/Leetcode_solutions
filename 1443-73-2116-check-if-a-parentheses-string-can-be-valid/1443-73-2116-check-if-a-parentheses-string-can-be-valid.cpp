class Solution {
public:
    bool canBeValid(string s, string locked) {
        int i,n=s.size();
        if(n%2!=0) {
            return false;
        }
        int c=0;
        for(i=0; i<n; i++) {
            if(locked[i]=='0' or s[i]=='(') {
                c++;
            }
            else {
                c--;
            }
            if(c<0) {
                return false;
            }
        }
        c=0;
        for(i=n-1; i>=0; i--) {
            if(locked[i]=='0' or s[i]==')') {
                c++;
            }
            else {
                c--;
            }
            if(c<0) {
                return false;
            }
        }
        return true;
    }
};