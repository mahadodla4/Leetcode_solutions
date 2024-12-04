class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int i=0,j=0,n=str1.size(),m=str2.size();
        while(i<n and j<m) {
            if((str1[i]==str2[j]) or (str1[i]=='z' and str2[j]=='a') or (str1[i]+1==str2[j])) {
                i++;
                j++;
            }
            else {
                i++;
            }
        }
        if(j==m) {
            return 1;
        }
        return 0;
    }
};

