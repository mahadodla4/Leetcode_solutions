class Solution {
public:
    vector<int> sequentialDigits(int low, int high) 
    {
        string ans="123456789";
        int a=to_string(low).size();
        int b=to_string(high).size();
        set<int>s;
        vector<int>l;
        for(int i=a; i<=b; i++)
        {
            for(int j=0; j<ans.size(); j++)
            {
                int val=stoi(ans.substr(j,i));
                //cout<<j<<" "<<j+i<<" "<<val<<endl;
                if(val>=low and val<=high)
                {
                    s.insert(val);
                }
            } 
        }
        for(auto i:s)
        {
            l.push_back(i);
        }
        return l;
    }
};