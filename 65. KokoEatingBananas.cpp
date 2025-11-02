class Solution {
public:
    int maxElem(vector<int>& arr){
        int maxElem = INT_MIN;
        for(int i = 0; i < arr.size(); i++){
            maxElem = max(maxElem, arr[i]);
        }
        return maxElem;
    }

    long long numberOfHours(int mid, vector<int>& arr){
        long long hours = 0;
        for(int i = 0; i < arr.size(); i++){
            hours += ceil((double)arr[i]/(double)mid);
        }
        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = maxElem(piles);

        while(low <= high){
            int mid = low + (high - low)/2;
            long long hours = numberOfHours(mid, piles);
            if(hours > h){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low;
    }
};
