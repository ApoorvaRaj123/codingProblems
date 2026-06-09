class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxSum = INT_MIN;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (sum < 0) {
                maxSum = max(maxSum, sum);
                sum = 0;
            }
            else if (sum > maxSum) {
                maxSum = sum;
            }
        }
        return maxSum;
    }
};
