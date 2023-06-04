class Solution {
public:
    string reverseWords(string s) 
    {
        string res="",ans="";
        stack<string>st;
        for(int i=0; i<s.size(); i++)
        {
            ans=" ";
            if(s[i]==' ')
            {
                continue;
            }
            while(s[i]!=' ' and i<s.size())
            {
                ans+=s[i];
                i++;
            }
            st.push(ans);
        }
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        res.erase(0,1);
        return res;
    }
};