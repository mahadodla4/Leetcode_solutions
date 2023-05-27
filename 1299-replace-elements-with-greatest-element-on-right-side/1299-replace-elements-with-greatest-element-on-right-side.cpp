class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) 
    {
        vector<int>l;
        int max=-1;
        l.push_back(-1);
        for(int i=size(arr)-1; i>0; i--)
        {
            if(max<arr[i])
            {
                max=arr[i];
            }
            l.push_back(max);
        }
        reverse(l.begin(),l.end());
        return l;
    }
};