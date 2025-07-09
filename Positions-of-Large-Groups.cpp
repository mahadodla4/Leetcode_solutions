class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int a=0;
        int b=0;
        vector<vector<int>>result;
        while(b<s.size()){
            while(b<s.size() && s[b]==s[a]){
                b++;
            }
            if(b-a>=3){
                result.push_back({a,b-1});
            }
            a=b;
        }
        return result;
    }
};