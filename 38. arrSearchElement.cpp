class Solution {
  public:
    bool searchInSorted(vector<int>& arr, int k) {
        
        int start = 0;
        int last = arr.size() - 1;
        
        while(start <= last){
            int mid = (start + last)/2;
            
            if(k == arr[mid]){
                return true;
            }
            else if(k < arr[mid]){
                last = mid - 1;
            }
            else if(k > arr[mid]){
                start = mid + 1;
            }
        }
        return false;
        // Your code here
    }
};
