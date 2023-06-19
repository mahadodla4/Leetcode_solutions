class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
        vector<int>l;
        l.push_back(0);
        int i,a=0+gain[0],max=INT_MIN;
        l.push_back(a);
        for(i=1; i<gain.size(); i++)
        {
            a=a+gain[i];
            l.push_back(a);
        }
        for(auto i:l)
        {
            if(max<i)
            {
                max=i;
            }
        }
        return max;
    }
};