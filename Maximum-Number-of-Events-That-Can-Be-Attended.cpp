class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(),events.end());
        priority_queue<int,vector<int>,greater<int>>pq;
        int n=events.size(),c=0,i=0,maxi=0;
        for(auto it:events) {
            maxi=max(maxi,it[1]);
        }
        for(int j=0; j<=maxi; j++) {
            while(i<n and events[i][0] <= j) {
                pq.push(events[i][1]);
                i++;
            }
            while(!pq.empty() and j>pq.top()) {
                pq.pop();
            }
            if(!pq.empty()) {
                c++;
                pq.pop();
            }
        }
        return c;
    }
};