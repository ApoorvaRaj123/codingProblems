class Solution {
  public:
    int merge(vector<int>& arr, int l, int m, int r) {
        vector<int> ans;
        int a=l, b=m+1, count=0;
        while(a<=m && b<=r) {
            if(arr[a]<=arr[b]) ans.push_back(arr[a++]);
            else {
                count += (m-a+1);
                ans.push_back(arr[b++]);
            }
        }
        while(a<=m) ans.push_back(arr[a++]);
        while(b<=r) ans.push_back(arr[b++]);
        for(int i=l; i<=r; i++) arr[i] = ans[i-l];
        return count;
    }
  
    int mergeSort(vector<int>& arr, int i, int j) {
        if(i>=j) return 0;
        int n=arr.size();
        int mid = (i+j)/2;
        int count=0;
        count+=mergeSort(arr,i,mid);
        count+=mergeSort(arr,mid+1,j);
        count+=merge(arr,i,mid,j);
        return count;
    }
    int inversionCount(vector<int> &arr) {
        // code here
        return mergeSort(arr,0,arr.size()-1);
    }
};
