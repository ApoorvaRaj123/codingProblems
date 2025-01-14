class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int Max = 0;
        int count = 0;
        for(int i = 0; i<nums.size();i++){
            if(nums[i] == 1){
                count++;
                Max = max(Max, count);
            }
            else if(nums[i] == 0){
                count = 0;
            }
        }
        return Max;
    }
};
