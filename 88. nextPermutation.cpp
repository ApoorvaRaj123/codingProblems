// BRUTE APPROACH

// Generate all permutations (It's possible with Recursion)
// Search the next permutation of the current array in the generated permutations.
// return the new modified array;


// OPTIMAL APPROACH
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index = -1;
        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }
        if (index == -1) {
            reverse(nums.begin(), nums.end());
        } else {
            for (int i = nums.size() - 1; i >= index + 1; i--) {
                if (nums[i] > nums[index]) {
                    swap(nums[index], nums[i]);
                    sort(nums.begin() + index + 1, nums.end());
                    break;
                }
            }
        }
    }
};
