class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        stringstream ss(text);
        string word;
        vector<string>l;
        while(ss >> word) {
            l.push_back(word);
        }
        int n=l.size(),c=0;
        for(auto i:l) {
            for(auto j:brokenLetters) {
                if(i.find(j)!=-1) {
                    c++;
                    break;
                }
            }
        }
        return n-c;
    }
};