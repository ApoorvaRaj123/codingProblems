class Solution {
private:
    bool possible(vector<int> weights, int days, int capacity){
        int dayTaken = 0, wt = 0;

        for(int i = 0; i < weights.size(); i++){
            if(wt + weights[i] > capacity){
                dayTaken++;
                wt = weights[i];
            }
            else{
                wt += weights[i];
            }
        }
        return dayTaken >= days;
    }

public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = INT_MIN, high = 0;
        for(int i = 0; i < weights.size(); i++){
            low = max(low, weights[i]);
            high += weights[i];
        }
        
        while(low <= high){
            int mid = low + (high - low)/2;

            if(possible(weights, days, mid)){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low;
    }
};
