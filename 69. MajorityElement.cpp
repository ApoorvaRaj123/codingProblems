class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int elem, cnt = 0;
        
        for(int i = 0; i < nums.size(); i++){
            if(cnt == 0){
                cnt = 1;
                elem = nums[i];
            }
            else if(elem == nums[i]){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return elem;
    }
};
