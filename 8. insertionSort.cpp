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
