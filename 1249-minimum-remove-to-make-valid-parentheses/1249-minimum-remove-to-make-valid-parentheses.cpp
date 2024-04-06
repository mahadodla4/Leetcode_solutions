class Solution {
public:
    string minRemoveToMakeValid(string s) 
    {
        stack<char>st;
        string res="";
        int open=0,close=0;
        for(auto i:s)
        {
            if(i=='(')
            {
                open++;
            }
            else if(i==')')
            {
                close++;
            }
            if(close>open)
            {
                close--;
            }
            else
            {
                st.push(i);
            }
        }
        while(!st.empty())
        {
            char val=st.top();
            st.pop();
            if(open>close and val=='(')
            {
                open--;
            }
            else
            {
                res+=val;
            }

        }
        reverse(res.begin(),res.end());
        return res;
    }
};