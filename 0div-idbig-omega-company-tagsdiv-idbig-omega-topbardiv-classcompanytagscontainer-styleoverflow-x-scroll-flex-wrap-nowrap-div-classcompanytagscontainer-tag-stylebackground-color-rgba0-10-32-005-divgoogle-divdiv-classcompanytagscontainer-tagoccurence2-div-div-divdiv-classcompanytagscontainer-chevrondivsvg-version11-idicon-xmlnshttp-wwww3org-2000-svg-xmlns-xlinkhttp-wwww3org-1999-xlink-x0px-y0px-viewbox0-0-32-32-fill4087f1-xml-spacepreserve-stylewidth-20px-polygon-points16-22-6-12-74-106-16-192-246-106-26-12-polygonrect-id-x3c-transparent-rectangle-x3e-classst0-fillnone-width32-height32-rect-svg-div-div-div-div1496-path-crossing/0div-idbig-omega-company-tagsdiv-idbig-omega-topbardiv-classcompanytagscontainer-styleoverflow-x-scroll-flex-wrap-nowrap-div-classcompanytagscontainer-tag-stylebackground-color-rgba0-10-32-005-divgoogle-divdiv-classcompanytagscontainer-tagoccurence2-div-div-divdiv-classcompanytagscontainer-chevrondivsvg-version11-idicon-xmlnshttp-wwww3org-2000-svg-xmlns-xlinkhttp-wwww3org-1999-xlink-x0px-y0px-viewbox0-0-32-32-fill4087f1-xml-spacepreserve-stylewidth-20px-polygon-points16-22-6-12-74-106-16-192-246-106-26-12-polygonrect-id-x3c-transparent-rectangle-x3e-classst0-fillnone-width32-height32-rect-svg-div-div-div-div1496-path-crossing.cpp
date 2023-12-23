class Solution {
public:
    bool isPathCrossing(string path) 
    {
        set<pair<int,int>>st;
        st.insert({0,0});
        pair<int,int>a={0,0};
        for(auto i:path)
        {
            if(i=='N')
            {
                a.first+=1;
            }
            else if(i=='S')
            {
                a.first-=1;
            }
            else if(i=='E')
            {
                a.second+=1;
            }
            else if(i=='W')
            {
                a.second-=1;
            }
            if(st.count({a.first,a.second})>0)
            {
                return 1;
            }
            st.insert({a.first,a.second});
        }
        return 0;
    }
};
