class Solution {
private:
int firstOccurence(vector<int> nums, int k){
            int ans = -1, left = 0, right = nums.size() - 1;

            while(left <= right){
                int mid = left + (right - left)/2;

                if(nums[mid] == k){
                    ans = mid;
                    right = mid - 1;
                }
                else if(k < nums[mid]){
                    right = mid - 1;
                }
                else{
                    left = mid + 1;
                }
            }
            return ans;
        }

        int lastOccurence(vector<int> nums, int k){
            int ans = -1, left = 0, right = nums.size() - 1;

            while(left <= right){
                int mid = left + (right - left)/2;

                if(nums[mid] == k){
                    ans = mid;
                    left = mid + 1;
                }
                else if(k < nums[mid]){
                    right = mid - 1;
                }
                else{
                    left = mid + 1;
                }
            }
            return ans;
        }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int fo = firstOccurence(nums, target);
        if(fo == -1) return {-1, -1};
        int lo = lastOccurence(nums, target);
        return {fo, lo};
    }
};
