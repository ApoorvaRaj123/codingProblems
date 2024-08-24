class Solution
{
    public:
    void insert(int arr[], int i, int n)
    {
        int j = i;
        while(j>0 && arr[j]<arr[j-1]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        for(int i = 0;i <= n-1;i++){
            insert(arr, i, n);
        }
        //code here
    }
}




// Method 2 



#include <bits/stdc++.h>
void insertionSort(int n, vector<int> &arr) {

    for(int i =0; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        for(;j>=0;j--){
          if (arr[j] > temp) {
            arr[j + 1] = arr[j];
          }
          else{
              break;
          }
        }
        arr[j+1] = temp;
    }

}
