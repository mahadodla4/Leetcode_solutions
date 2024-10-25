class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        vector<string>ans;
        sort(folder.begin(),folder.end());
        string prev=folder[0];
        for(auto i:folder) {
            if(i.find(prev+'/')!=0) {
                ans.push_back(i);
                prev=i;
            }
        }
        return ans;
    }
};