class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int>l;
        int i,n=code.size();
        if(k>=0) {
            for(i=0; i<n; i++) {
                int j=1,sum=0;
                while(j<=k) {
                    sum+=code[(i+j)%n];
                    j++;
                }
                l.push_back(sum);
            }
        }
        else {
            for(i=0; i<n; i++) {
                int j=1,sum=0;
                while(j<=-k) {
                    sum+=code[(i-j+n)%n];
                    j++;
                }
                l.push_back(sum);
            }
        }
        return l;
    }
};