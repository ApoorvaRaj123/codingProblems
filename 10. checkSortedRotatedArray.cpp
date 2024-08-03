class Solution {
public:
    bool check(vector<int>& nums) {

        if(nums.size() == 1){
            return true;
        }

        int breaks = 0;
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                breaks++;
            }
        }
        if(breaks == 0){
            return true;
        }
        else if(breaks == 1 && nums[nums.size()-1]<=nums[0]){
            return true;
        }
        else{
            return false;
        }
    }
};
