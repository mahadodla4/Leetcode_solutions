class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        for(int i=0; i<arr.size(); i++)
        {
            int j=i+1;
            if(arr[i]>arr[j])
            {
                return i;
            }
        }
        return 0;
    }
};