class Solution {
public:
    string makeGood(string s) 
    {
        stack<char>st;
        for(int i=0; i<s.size(); i++)
        {
            if(!st.empty())
            {
                char a=s[i]-32;
                char b=s[i]+32;
                if(st.top()==a or st.top()==b)
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
            else
            {
                st.push(s[i]);
            }
        }
        string res="";
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};