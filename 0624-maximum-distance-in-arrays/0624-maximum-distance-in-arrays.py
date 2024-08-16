class Solution:
    def maxDistance(self, arrays: List[List[int]]) -> int:
        mn, mx = arrays[0][0], arrays[0][-1]
        ans = 0
        for i in range(1, len(arrays)):
            arr = arrays[i]
            ans = max(ans, arr[-1] - mn, mx-arr[0])
            mn = min(mn, arr[0])
            mx = max(mx, arr[-1])
        return ans