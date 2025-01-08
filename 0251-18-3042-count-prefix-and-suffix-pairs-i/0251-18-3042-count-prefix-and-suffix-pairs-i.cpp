class Solution {
public:
    bool PrefixSuffix(string a,string b) {
        int n=a.size(),m=b.size();
        if(n>m) {
            return false;
        }
        string c=b.substr(0,n);
        string d=b.substr(m-n);
        if(c==a and d==a) {
            return true;
        }
        return false;
    }
    int countPrefixSuffixPairs(vector<string>& words) {
        int i,j,n=words.size(),c=0;
        for(i=0; i<n; i++) {
            for(j=i+1; j<n; j++) {
                if(PrefixSuffix(words[i],words[j])) {
                    c++;
                }
            }
        }
        return c;
    }
};
