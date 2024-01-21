#include<iostream>
#include<bits.stdc++.h>
using namespace std;


int grtPivot(int arr[], int n){
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s)/2;

  while(s<e){
    if(arr[mid]>=arr[0]){
      s = mid + 1;
    }
    else{
      e = mid;
    }
  }
  return s;
}


int main(){
  
  int arr[5] = [3, 8, 10, 18, 1];
  cout << "Pivot element is : " << grtPivot(arr, 5) << endl;
  
}
