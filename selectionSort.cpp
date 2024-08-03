Class Solution
{
public:
    int select(int arr[], int i, int n)
    {
        int mini = i;
        
        for(int j = i+1; j<=n-1; j++){
            if(arr[j] < arr[mini]) mini = j;
        }
        
        return mini;
        // code here such that selectionSort() sorts arr[]
    }
     
    void selectionSort(int arr[], int n)
    {
       for(int i = 0;i <= n-2;i++){
        int min = select(arr,i,n);
        
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }//code here
    }
}
