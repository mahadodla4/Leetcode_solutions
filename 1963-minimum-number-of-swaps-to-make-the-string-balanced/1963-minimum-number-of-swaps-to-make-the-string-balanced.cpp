class Solution {
public:
    int minSwaps(string s) {
        int i,n=s.size(),oc=0;
        for(i=0; i<n; i++)
        {
            if(s[i]=='[') {
                oc++;
            }
            else if(oc>0) {
                oc--;
            }
        }
        return (oc+1)/2;
    }
};