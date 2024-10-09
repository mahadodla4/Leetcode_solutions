class Solution {
public:
    int minAddToMakeValid(string s) {
        int oc=0,cc=0;
        for(auto i:s) {
            if(i=='(') {
                oc++;
            }
            else if(i==')' and oc>0) {
                oc--;
            }
            else {
                cc++;
            }
        }
        return oc+cc;
    }
};