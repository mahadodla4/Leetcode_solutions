class Solution {
public:
    bool vowel(char c) {
        if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u') {
            return true;
        }
        return false;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int>res;
        int n=words.size();
        int pref[n];
        if(vowel(words[0][0]) and vowel(words[0][words[0].size()-1])) {
            pref[0]=1;
        }
        else {
            pref[0]=0;
        }
        for(int i=1; i<n; i++) {
            if(vowel(words[i][0]) and vowel(words[i][words[i].size()-1])) {
                pref[i]=pref[i-1]+1;
            }
            else {
                pref[i]=pref[i-1];
            }
        }
        for(auto i:queries) {
            int l=i[0],r=i[1];
            if(l==0) {
                res.push_back(pref[r]);
            }
            else {
                res.push_back(pref[r]-pref[l-1]);
            }
        }
        return res;
    }
};

