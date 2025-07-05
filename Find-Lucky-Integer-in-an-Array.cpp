class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        vector<int>l;
        int c=0;
        for(auto i:arr) {
            mp[i]++;
        }
        for(auto i:mp) {
            if(i.first == i.second) {
                l.push_back(i.first);
            }
        }
        sort(l.rbegin(),l.rend());
        if(l.size()==0) {
            return -1;
        }
        return l[0];
    }
};