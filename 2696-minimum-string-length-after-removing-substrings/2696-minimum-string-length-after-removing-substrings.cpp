class Solution {
public:
    int minLength(string s) 
    {
        int i,len;
        stack<int>st;
        for(i=0; i<s.size(); i++)
        {
            if(!st.empty() and s[i]=='B' and st.top()=='A')
            {
                st.pop();
            }
            else if(!st.empty() and s[i]=='D' and st.top()=='C')
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        len=size(st);
        return len;
    }
};