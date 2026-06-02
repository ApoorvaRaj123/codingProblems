class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // int rotation = k%nums.size();
        // for(int i = 1;i<=rotation;i++){
        //     int last = nums[nums.size()-1];
        //     for(int j = nums.size()-1;j>=1;j--){
        //         nums[j] = nums[j-1];
        //     }
        //     nums[0] = last;
        // }
        int total = k%nums.size();
        for (int i = 1; i <= total; i++) {
            int lastNum = nums[nums.size()-1];
            for(int j = nums.size()-1; j>=1; j--){
                nums[j] = nums[j-1];
            }
            nums[0] = lastNum;
        }
}
}
;
