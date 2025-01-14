class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start = 0;
        int n = nums.size();
        for(int i = 0;i < n;i++){
            if(nums[i] != 0){
                int temp = nums[i];
                nums[i] = nums[start];
                nums[start] = temp;
                start++;
            }
        }
    }
};
