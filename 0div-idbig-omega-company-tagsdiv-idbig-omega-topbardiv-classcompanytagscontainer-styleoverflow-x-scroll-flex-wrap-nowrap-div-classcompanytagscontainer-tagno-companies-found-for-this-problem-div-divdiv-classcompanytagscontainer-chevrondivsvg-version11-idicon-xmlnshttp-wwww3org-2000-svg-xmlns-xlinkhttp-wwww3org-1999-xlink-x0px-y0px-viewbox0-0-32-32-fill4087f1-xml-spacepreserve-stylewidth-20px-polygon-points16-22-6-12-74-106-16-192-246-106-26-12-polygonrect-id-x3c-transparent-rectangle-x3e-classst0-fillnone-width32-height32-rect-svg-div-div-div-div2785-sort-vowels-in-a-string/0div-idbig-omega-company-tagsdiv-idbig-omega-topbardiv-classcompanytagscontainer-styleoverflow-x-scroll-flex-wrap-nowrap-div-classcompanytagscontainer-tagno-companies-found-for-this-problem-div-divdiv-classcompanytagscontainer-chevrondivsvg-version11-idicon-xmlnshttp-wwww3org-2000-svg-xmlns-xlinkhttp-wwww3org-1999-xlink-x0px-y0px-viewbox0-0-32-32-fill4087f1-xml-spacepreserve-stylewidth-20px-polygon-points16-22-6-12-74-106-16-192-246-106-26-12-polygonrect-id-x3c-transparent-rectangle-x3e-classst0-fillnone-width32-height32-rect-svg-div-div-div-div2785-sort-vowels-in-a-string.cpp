class Solution {
public:
    string sortVowels(string s) 
    {
        string vowels="aeiouAEIOU";
        vector<char>l;
        for(auto i:s)
        {
            if(vowels.find(i)!=-1)
            {
                l.push_back(i);
            }
        }
        sort(l.rbegin(),l.rend());
        string s1="";
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