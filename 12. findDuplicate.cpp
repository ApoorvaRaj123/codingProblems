int findDuplicate(vector<int> &arr) 
{
    
    int ans;
    for(int i = 0;i<=arr.size()-1;i++){
        int count=0;
        for(int j = 0; j<=arr.size()-1;j++ ){
            if(arr[j]==arr[i]){
                count++;
            }
        }
        if(count == 2){
            ans = arr[i];
        }
    }
	return ans;
}
