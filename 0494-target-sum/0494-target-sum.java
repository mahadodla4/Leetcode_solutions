class Solution {
    public int findTargetSumWays(int[] nums, int target) {
        return check(nums, target, 0, 0);
    }
    private int check(int[] arr, int target, int idx, int sum) {
        if (idx >= arr.length)
            return sum == target ? 1 : 0;
        int sub = check(arr, target, idx + 1, sum - arr[idx]);
        int add = check(arr, target, idx + 1, sum + arr[idx]);
        return sub + add;
    }
}