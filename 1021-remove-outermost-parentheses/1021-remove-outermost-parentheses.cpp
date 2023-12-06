class Solution {
public:
    string removeOuterParentheses(string s) 
    {
        string res="";
        int c=0;
        for(auto i:s)
        {
            if(i=='(')
            {
                c++;
            }
            else
            {
                c--;
            }
            if(c==1 and i=='(')
            {
                continue;
            }
            if(c==0 and i==')')
            {
                continue;
            }
            else
            {
                res+=i;
            }
        }
        return res;
    }
};