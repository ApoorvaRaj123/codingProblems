class Solution {
public:

    int leftSum(vector<int>& arr, int k){
        int ls = 0;
        for(int i = 0; i < k; i++){
            ls += arr[i];
        }
        return ls;
    }

    int rightSum(vector<int>& arr, int k){
        int rs = 0;
        for(int i = k+1; i <= arr.size()-1; i++){
            rs += arr[i];
        }
        return rs;
    }




    int pivotIndex(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;
        int mid = s + (e-s)/2;
        int ans = -1;

        while(s<=e){

            if(leftSum(nums, mid) == rightSum(nums, mid)){
                ans = mid;
                return ans;
            }

            else if(leftSum(nums, mid) < rightSum(nums, mid)){
                s = mid + 1;
            }
            else if(leftSum(nums, mid) > rightSum(nums, mid)){
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
};
