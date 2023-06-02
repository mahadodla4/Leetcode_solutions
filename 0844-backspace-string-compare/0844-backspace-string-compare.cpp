class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        stack<int>st;
        stack<int>st1;
        string res1,res2;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!='#')
            {
                st.push(s[i]);
            }
            else if(!st.empty() and s[i]=='#')
            {
                st.pop();
            }
        }
        for(int j=0; j<t.size(); j++)
        {
            if(t[j]!='#')
            {
                st1.push(t[j]);
            }
            else if(!st1.empty() and t[j]=='#')
            {
                st1.pop();
            }
        }
        while(!st.empty())
        {
            res1+=st.top();
            st.pop();
        }
        while(!st1.empty())
        {
            res2+=st1.top();
            st1.pop();
        }
        cout<<res1<<" "<<res2<<endl;
       if(res1==res2)
       {
           return 1;
       }
       else
       {
           return 0;
       }
    }
};