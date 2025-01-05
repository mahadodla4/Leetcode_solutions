class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n=s.size();
        vector<int>v(n+1);
        for(auto i:shifts) {
            int st=i[0],e=i[1],pos=i[2];
            if(pos==1) {
                v[st]++;
                v[e+1]--;
            }
            else {
                v[st]--;
                v[e+1]++;
            }
        }
        for(int i=0; i<n; i++) {
            v[i+1]+=v[i];
        }
        for(int i=0; i<n; i++) {
            s[i]=((s[i]-'a')+(v[i]%26+26))%26+'a';
        }
        return s;
    }
};