class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int last = nums.size() - 1;
        int mid;

        while(start<=last){
            mid = (start + last)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(target < nums[mid]){
                last = mid-1;
            }
            else {
                start = mid+1;
            }
        }
        return -1;
    }
};
