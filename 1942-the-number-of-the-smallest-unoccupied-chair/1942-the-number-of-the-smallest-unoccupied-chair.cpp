class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int n=times.size(),i;
        vector<vector<int>>arrivals;
        for(i=0; i<n; i++) {
            arrivals.push_back({times[i][0],1,i});
            arrivals.push_back({times[i][1],0,i});
        }
        sort(arrivals.begin(),arrivals.end());
        priority_queue<int,vector<int>,greater<int>> chairs;
        for(i=0; i<n; i++) {
            chairs.push(i);
        }

        vector<int>guCh(n,-1);
        for(auto i:arrivals) {
            int time=i[0],flag=i[1],ind=i[2];
            if(flag==1) {
                int ch=chairs.top();
                chairs.pop();
                guCh[ind]=ch;

                if(ind==targetFriend) {
                    return ch;
                }
            }
            else {
                chairs.push(guCh[ind]);
            }
        }
        return -1;
    }
};