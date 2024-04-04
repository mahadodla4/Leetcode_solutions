class Solution {
public:
    int maxDepth(string s) 
    {
        int c=0,maxi=0;
        for(auto i:s)
        {
            if(i=='(')
            {
                c++;
                maxi=max(maxi,c);
            }
            else if(i==')')
            {
                c--;
            }
            else
            {
                continue;
            }
        }
        return maxi;
    }
};