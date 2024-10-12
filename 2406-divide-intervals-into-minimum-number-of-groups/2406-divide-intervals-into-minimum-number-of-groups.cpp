class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int>start,end;
        for(auto i:intervals) {
            start.push_back(i[0]);
            end.push_back(i[1]);
        }
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        int c1=0,c2=0;
        for(auto i:start) {
            if(i>end[c1]) {
                c1++;
            }
            else {
                c2++;
            }
        }
        return c2;
    }
};