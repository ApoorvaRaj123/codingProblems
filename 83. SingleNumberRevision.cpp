class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int l = nums.size();
        int ans = nums[0];
        for(int i = 1; i<l; i++){
            ans = nums[i]^ans;
       }
       return ans;
    }
};

// I can use Map too
