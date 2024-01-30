class Solution {
public:
    int exp(int a,int b,string s)
    {
        if(s=="+")
        {
            return b+a;
        }
        else if(s=="-")
        {
            return b-a;
        }
        else if(s=="*")
        {
            return b*a;
        }
        else
        {
            return b/a;
        }
    }
    int evalRPN(vector<string>& tokens) 
    {
        int res;
        stack<int>st;
        for(auto i:tokens)
        {
            if(i=="+" or i=="-" or i=="*"  or i=="/")
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                res=exp(a,b,i);
                st.push(res);
            }
            else
            {
                st.push(stoi(i));
            }
        }
        if(!st.empty())
        {
            return st.top();
            st.pop();
        }
        return res;
    }
};