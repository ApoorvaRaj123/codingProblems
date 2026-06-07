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

// OPTIMAL Solution : at least one majority element is there.
// So, Simlpe make a count and increase it for similar value in array.
// As soon as element changes, decrease the count.
// If it reaches zeor, renew the count to one and update the answer element.
// The majority element will AT LEAST, have a count of 1 remaining.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int  ans, count = 0;
        for(int i = 0; i <= nums.size() - 1; i++){
            if(count == 0){
                count = 1;
                ans = nums[i];
            }
            else if (ans == nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        return ans;
    }
};
