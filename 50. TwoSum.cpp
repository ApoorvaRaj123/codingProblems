// brute solution

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i = 0; i<nums.size()-1; i++){
            for(int j = i+1; j< nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};


// Better solution using Hash Map

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int, int> mpp;

       for(int i = 0; i<nums.size(); i++){
        int extra = target - nums[i];

        if(mpp.find(extra) != mpp.end()){
            return {mpp[extra], i};
        }
        mpp[nums[i]] = i;
       }
       return {-1, -1};
    }
};
