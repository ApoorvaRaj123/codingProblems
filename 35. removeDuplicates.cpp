// I changed the array nums itself such that all unique values comes in ascending order initially and not caring for the rest of the values after the last unique value. Then I returned the number of 
// Unique values.

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int uniqueCount = 1;
        int index = 1;
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i+1] > nums[i]){
                nums[index] = nums[i+1];
                index++;
                uniqueCount++;
            }
        }
        return uniqueCount;
    }
};
