class Solution {
public:
    bool isValid(string s) 
    {
        stack<int>st;
        int i;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='(' or s[i]=='{' or s[i]=='[')
            {
                st.push(s[i]);
            }
            else
            {
                if(!st.empty() and st.top()=='(' and s[i]==')')
                {
                    st.pop();
                }
                else if(!st.empty() and st.top()=='[' and s[i]==']')
                {
                    st.pop();
                }
                else if(!st.empty() and st.top()=='{' and s[i]=='}')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        if(st.empty())
        {
            return true;
        }
        return false;
    }

};