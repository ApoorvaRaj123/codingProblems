class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> arr(nums.size(), 0);
        int indexP = 0;
        int indexN = 1;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] >= 0){
                arr[indexP] = nums[i];
                indexP += 2;
            }
            else{
                arr[indexN] = nums[i];
                indexN += 2;
            }
        }
        return arr;
    }
};
