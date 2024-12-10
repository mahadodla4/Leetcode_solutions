class Solution {
public:
    int maximumLength(string s) {
        int n=s.size(),maxi=-1;
        for(int i=1; i<n; i++) {
            unordered_map<string,int>freq;
            for(int j=0; j<=n-i; j++) {
                string str=s.substr(j,i);
                bool flag=true;
                for(int k=1; k<i; k++) {
                    if(str[k]!=str[0]) {
                        flag=false;
                        break;
                    }
                }
                if(flag) {
                    freq[str]++;
                    if(freq[str] >= 3) {
                        maxi=max(maxi,i);
                    }
                }
            }
        }
        return maxi;
    }
};