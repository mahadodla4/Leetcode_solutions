class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) 
    {
        map<int,int>win;
        map<int,int>lose;
        vector<int>A;
        vector<int>B;
        for(int i=0; i<matches.size(); i++)
        {
            win[matches[i][0]]++;
            lose[matches[i][1]]++;
        }
        vector<vector<int>>res;
        for(auto i:win)
        {
            if(lose.find(i.first)==lose.end())
            {
                A.push_back(i.first);
            }
        }
        for(auto i:lose)
        {
            if(i.second==1)
            {
                B.push_back(i.first);
            }
        }
        res.push_back(A);
        res.push_back(B);
        return res;
    }
};

