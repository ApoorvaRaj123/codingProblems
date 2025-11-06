class Solution {
private: 
    bool divSum(vector<int>& nums, int divisor, int threshold){
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += ceil((double)nums[i]/(double)divisor);
        }
        return sum <= threshold;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1 , high = INT_MIN;
        for(int i = 0; i< nums.size(); i++){
            low = min(low, nums[i]);
            high = max(high, nums[i]);
        }
        
        while(low <= high){
            int mid = low + (high - low)/2;
            if(divSum(nums, mid, threshold)){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};
