class Solution {
public:
    int countCharacters(vector<string>& words, string chars) 
    {
        int res=0;
        for(auto i:words)
        {
            string str=chars;
            int flag=1;
            for(auto j:i)
            {
                int pos=str.find(j);
                if(pos!=-1)
                {
                    str.erase(pos,1);
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                res+=i.size();
            }
        }
        return res;
    }
};