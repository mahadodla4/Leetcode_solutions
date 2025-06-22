class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>chunks;
        int n=s.size();
        int val=n%k;
        if(val!=0) {
           s.append(k-val,fill);
        }
        for(int i=0; i<n; i+=k) {
          chunks.push_back(s.substr(i,k));
        }
        return chunks;
    }
};