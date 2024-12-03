class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string str="";
        int i=0,n=spaces.size();
        for(int j=0; j<s.size(); j++) {
            if(i<n and j==spaces[i]) {
                str+=' ';
                i++;
            }
            str+=s[j];
        }
        return str;
    }
};
