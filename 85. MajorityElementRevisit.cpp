// BRUTE Solution

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int maxCount = 0;
        int ans = nums[0];
        for(int i = 0;i <= n-1;i++){
            int countElem = 0;
            for(int j = 0; j <= n-1; j++){
                if(nums[j] == nums[i]){
                    countElem++;
                }
            }
            if(countElem > maxCount){
                maxCount = countElem;
                ans = nums[i];
            }
        }
        return ans;
    }
};
