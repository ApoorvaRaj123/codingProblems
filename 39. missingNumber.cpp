class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int nSum = (nums.size()*(nums.size()+1))/2;
        int answer = 0;
        int arraySum = 0;
        for(int i = 0;i<nums.size();i++){
            arraySum += nums[i];
        }
        answer = nSum - arraySum;
        return answer;
    }
};
