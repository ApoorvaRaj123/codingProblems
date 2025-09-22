class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int r = k%n;

        // handling Edge case of empty array ( n = 0 ) and zero effective rotation ( r = 0 )
        if(n == 0 || r == 0){
            return;
        }
        
        int temp[r];

        // putting in temp array

        for(int i = 0; i<r; i++){
            temp[i] = nums[n-r+i];
        }

        // shifting in nums for left of "r" elements

        for(int j = n-1; j>=r; j--){
            nums[j] = nums[j-r];
        }

        // putting temp in the nums array from 0th index

        for(int k = 0; k<r; k++){
            nums[k] = temp[k];
        }
    }
};
