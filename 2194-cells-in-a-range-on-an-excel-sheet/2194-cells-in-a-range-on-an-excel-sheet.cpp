class Solution {
public:
    vector<string> cellsInRange(string s) 
    {
        vector<string>res;
        char s1,s2;
        string s3;
        int d1=stoi(s.substr(1,1));
        int d2=stoi(s.substr(4,4));
        for(char i=s[0]; i<=s[3]; i++)
        {
            for(int j=d1; j<=d2; j++)
            {
                s1=i;
                s2=j;
                s3=s1+to_string(s2);
                res.push_back(s3);
            }
        }
        return res;
    }
};