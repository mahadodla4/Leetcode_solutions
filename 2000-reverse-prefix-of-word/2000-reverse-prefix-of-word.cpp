class Solution {
public:
    string reversePrefix(string word, char ch) 
    {
        int ind=0;
        for(int i=0; i<word.size(); i++)
        {
            if(word[i]==ch)
            {
                ind=i;
                break;
            }
        }
        string a=word.substr(0,ind+1);
        string b=word.substr(ind+1,word.size());
        reverse(a.begin(),a.end());
        return a+b;
    }
};