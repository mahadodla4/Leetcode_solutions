class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int ans=0,l=0,r=n-1;
        while(l<r) {
            int width=r-l;
            int len=min(height[l],height[r]);
            int area=width*len;
            ans=max(ans,area);
            if(height[l]<height[r]) {
                l++;
            }
            else {
                r--;
            }
        }
        return ans;
    }
};

