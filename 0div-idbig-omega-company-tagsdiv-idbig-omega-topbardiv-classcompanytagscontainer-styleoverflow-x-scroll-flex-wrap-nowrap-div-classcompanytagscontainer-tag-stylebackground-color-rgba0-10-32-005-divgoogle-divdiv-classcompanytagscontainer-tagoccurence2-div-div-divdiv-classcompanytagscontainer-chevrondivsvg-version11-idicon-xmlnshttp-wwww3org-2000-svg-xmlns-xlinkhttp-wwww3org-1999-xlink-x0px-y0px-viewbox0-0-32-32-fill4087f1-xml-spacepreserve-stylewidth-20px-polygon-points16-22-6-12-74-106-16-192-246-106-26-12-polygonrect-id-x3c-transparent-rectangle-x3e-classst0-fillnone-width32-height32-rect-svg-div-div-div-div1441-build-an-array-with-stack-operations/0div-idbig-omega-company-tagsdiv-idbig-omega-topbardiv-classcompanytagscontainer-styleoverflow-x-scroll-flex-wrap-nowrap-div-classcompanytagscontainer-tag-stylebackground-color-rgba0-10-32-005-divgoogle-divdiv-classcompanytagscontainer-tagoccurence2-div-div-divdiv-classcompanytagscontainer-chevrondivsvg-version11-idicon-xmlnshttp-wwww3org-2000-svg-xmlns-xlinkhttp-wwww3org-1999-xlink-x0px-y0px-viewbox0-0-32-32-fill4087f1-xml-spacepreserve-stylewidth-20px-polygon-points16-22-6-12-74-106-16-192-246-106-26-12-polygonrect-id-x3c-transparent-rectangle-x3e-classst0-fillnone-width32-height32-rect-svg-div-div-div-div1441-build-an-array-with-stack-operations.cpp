class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) 
    {
        vector<string>s;
        stack<int>st;
        int num=1,i=0;
        while(i<target.size())
        {
            s.push_back("Push");
            if(target[i]==num)
            {
                i++;
            }
            else
            {
                s.push_back("Pop");
            }
            num++;
        }
        return s;
    }
};