class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int i=0,j=0,k=0,n=nums1.size(),m=nums2.size();
        int arr[n+m];
        while(i<nums1.size() && j<nums2.size())
        {
            if(k%2==0)
            {
                arr[k++]=nums1[i++];
            }
            else
            {
                arr[k++]=nums2[j++];
            }
        }
        while(i<nums1.size())
        {
            arr[k++]=nums1[i++];
        }
        while(j<nums2.size())
        {
            arr[k++]=nums2[j++];
        }
        vector<int>res;
        for(i=0; i<(n+m); i++)
        {
            res.push_back(arr[i]);
        }
        sort(res.begin(),res.end());
        int size=res.size();
        if(size%2!=0)
        {
            double a=res[size/2];
            return a;
        }
        else
        {
            int b=(size/2)-1;
            int c=b+1;
            double d=(float)(res[b]+res[c])/2;
            return d;
        }
    }
};