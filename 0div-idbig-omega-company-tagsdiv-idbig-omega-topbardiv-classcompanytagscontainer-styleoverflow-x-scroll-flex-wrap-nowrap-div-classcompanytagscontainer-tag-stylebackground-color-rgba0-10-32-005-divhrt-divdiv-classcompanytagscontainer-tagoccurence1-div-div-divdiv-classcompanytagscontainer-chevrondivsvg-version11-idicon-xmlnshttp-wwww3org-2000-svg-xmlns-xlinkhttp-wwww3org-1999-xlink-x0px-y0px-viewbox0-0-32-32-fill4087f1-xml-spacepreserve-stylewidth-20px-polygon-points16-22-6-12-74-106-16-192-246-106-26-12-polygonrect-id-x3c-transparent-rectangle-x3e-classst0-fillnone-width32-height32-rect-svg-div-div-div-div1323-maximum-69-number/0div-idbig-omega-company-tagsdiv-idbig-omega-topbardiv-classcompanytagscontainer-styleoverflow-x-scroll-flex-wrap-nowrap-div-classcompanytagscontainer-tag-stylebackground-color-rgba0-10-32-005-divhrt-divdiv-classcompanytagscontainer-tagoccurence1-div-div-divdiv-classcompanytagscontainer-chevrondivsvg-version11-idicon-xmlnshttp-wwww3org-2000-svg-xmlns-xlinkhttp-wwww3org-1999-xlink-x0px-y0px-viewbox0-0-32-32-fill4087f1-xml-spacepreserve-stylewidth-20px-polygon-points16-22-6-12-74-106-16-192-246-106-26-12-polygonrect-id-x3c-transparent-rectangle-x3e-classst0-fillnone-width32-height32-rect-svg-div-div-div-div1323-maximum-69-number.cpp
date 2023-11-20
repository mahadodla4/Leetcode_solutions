class Solution {
public:
    int maximum69Number (int num) 
    {
        string s=to_string(num);
        string s1="";
        int flag=0;
        for(auto i:s)
        {
            if(i=='6' and flag!=1)
            {
                s1+='9';
                flag=1;
            }
            else
            {
                s1+=i;
            }
        }
        return stoi(s1);
    }
};