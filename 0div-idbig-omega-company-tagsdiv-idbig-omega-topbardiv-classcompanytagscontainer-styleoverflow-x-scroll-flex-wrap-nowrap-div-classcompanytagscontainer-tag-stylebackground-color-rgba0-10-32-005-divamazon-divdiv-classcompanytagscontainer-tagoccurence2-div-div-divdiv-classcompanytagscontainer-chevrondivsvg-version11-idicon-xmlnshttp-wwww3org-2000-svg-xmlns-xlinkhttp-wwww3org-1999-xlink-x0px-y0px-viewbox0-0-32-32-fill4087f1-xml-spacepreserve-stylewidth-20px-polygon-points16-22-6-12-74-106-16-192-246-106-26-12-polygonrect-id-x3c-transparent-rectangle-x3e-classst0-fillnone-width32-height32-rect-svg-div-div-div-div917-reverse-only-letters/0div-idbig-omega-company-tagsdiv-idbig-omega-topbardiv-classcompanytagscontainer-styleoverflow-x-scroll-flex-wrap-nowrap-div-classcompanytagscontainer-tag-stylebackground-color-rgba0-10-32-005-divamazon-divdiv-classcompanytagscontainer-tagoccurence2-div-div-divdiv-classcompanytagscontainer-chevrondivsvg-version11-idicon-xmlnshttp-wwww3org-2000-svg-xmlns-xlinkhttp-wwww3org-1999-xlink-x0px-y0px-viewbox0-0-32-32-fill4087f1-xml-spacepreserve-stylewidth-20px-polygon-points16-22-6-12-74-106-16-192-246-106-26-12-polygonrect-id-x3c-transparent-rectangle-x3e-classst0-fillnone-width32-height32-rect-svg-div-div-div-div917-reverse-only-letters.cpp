class Solution {
public:
    string reverseOnlyLetters(string s) 
    {
        string letters="qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
        list<char>res;
        for(auto i:s)
        {
            if(letters.find(i)!=-1)
            {
                res.push_back(i);
            }
        }
        string s1="";
        reverse(res.begin(),res.end());
        for(auto i:s)
        {
            if(letters.find(i)!=-1)
            {
                s1+=res.front();
                res.pop_front();
            }
            else
            {
                s1+=i;
            }
        }
        return s1;
    }
};