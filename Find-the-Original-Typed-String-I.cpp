class Solution {
public:
    int possibleStringCount(string word) {
        int n=word.size(),c=1;
        for(int i=1; i<n; i++) {
            if(word[i]==word[i-1]) {
                c++;
            } else {
                continue;
            }
        }
        return c;
    }
};
