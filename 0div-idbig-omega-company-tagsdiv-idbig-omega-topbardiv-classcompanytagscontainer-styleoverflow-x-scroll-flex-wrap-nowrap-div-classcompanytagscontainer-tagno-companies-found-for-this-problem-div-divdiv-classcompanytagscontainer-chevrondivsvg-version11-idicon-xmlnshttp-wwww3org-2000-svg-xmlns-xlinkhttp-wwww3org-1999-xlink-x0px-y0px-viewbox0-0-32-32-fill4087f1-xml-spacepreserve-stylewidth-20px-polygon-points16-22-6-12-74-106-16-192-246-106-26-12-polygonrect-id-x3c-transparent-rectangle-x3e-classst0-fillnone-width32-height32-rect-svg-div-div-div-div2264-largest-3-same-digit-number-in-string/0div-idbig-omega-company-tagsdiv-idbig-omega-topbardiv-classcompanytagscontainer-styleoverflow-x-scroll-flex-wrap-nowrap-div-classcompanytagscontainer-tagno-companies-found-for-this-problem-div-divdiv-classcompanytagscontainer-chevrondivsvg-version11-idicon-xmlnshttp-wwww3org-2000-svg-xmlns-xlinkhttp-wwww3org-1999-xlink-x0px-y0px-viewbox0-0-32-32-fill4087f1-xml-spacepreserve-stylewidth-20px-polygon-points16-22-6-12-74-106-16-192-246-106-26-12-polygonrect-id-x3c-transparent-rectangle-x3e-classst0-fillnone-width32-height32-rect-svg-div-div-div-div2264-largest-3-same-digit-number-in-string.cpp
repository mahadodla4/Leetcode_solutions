class Solution {
public:
    string largestGoodInteger(string num) 
    {
        int i,c=0;
        vector<int>l;
        set<string>m;
        vector<string>m1;
        for(i=0; i<num.size()-2; i++)
        {
            string a=num.substr(i,3);
            if(a[0]==a[1] and a[1]==a[2])
            {
                l.push_back(stoi(a));
                m.insert(a);
            }
        }
        for(auto i:m)
        {
            m1.push_back(i);
        }
        sort(l.rbegin(),l.rend());
        if(m.size()==0)
        {
            return "";
        }
        if(m1.size()==1)
        {
            return m1[0];
        }
        return to_string(l[0]);
    }
};