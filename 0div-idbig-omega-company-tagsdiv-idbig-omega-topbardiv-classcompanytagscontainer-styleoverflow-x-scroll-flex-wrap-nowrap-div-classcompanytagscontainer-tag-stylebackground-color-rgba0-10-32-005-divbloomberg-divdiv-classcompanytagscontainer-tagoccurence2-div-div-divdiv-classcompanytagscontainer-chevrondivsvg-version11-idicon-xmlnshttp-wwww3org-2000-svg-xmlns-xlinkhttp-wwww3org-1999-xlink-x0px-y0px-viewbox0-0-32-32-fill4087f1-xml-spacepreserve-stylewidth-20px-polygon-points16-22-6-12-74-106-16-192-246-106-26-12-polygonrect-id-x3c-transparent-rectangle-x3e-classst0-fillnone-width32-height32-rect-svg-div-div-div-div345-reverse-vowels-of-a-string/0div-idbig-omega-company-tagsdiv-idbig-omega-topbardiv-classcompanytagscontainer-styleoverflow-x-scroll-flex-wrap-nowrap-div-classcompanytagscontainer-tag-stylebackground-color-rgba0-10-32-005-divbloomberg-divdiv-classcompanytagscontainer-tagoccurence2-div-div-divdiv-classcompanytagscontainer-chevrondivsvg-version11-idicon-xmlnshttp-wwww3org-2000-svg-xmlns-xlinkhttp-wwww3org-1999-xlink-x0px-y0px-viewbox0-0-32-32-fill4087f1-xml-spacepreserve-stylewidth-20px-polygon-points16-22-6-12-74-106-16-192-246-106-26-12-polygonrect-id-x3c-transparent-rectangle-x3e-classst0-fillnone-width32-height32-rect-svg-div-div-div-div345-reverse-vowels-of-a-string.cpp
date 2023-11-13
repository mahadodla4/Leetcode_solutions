class Solution {
public:
    string reverseVowels(string s) 
    {
        string vowels="aeiouAEIOU";
        string s1="";
        vector<char>l;
        for(auto i:s)
        {
            if(vowels.find(i)!=-1)
            {
                l.push_back(i);
            }
        }
        reverse(l.begin(),l.end());
        reverse(l.begin(),l.end());
        for(auto i:s)
        {
            if(vowels.find(i)!=-1)
            {
                s1+=l.back();
                l.pop_back();
            }
            else
            {
                s1+=i;
            }
        }
        return s1;
    }
};