class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int max = arr[0];
        int secMax = -1;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] > max){
                secMax = max;
                max = arr[i];
            }
            else if(arr[i] != max && arr[i] > secMax){
                secMax = arr[i];
            }
        }
        
        // for(int j = 0; j<arr.size(); j++){
        //     if(arr[j] != max && secMax < arr[j]){
        //         secMax = arr[j];
        //     }
        // }
        
        return secMax;
        // Code Here
    }
};
