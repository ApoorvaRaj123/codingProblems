class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int lg = arr[0];
        for(int i = 0;i <= n-1;i++){
            if(arr[i]>lg){
                lg = arr[i];
            }
        }
        return lg;
    }
};
