#include<bits.stdc++.h>
#include<iostream>

using namespace std;

// This function answer as a floor value and not a precise value.
int floorSqrt(int n) {

  int s = 0;
  int e = n;
  int ans = 0;
  long long int m = s + (e - s) / 2;

  while (s <= e) {

    long long int sqr = (m * m);

    if (sqr == n) {
      ans = m;
      return ans;
    }
    if (sqr > n) {
      e = m - 1;
    }
    if (sqr < n) {
      ans = m;
      s = m + 1;
    }
    m = s + (e - s) / 2;
  }
  return ans;
}


// For more precision . i.e including decimal values apply this below function

double morePrecision(int n, int precision, int tempSol){

  double factor = 1;
  double ans = tempSol;

  for(int  i = 0; i < precision; i++){
    factor = factor/10;

    for(int j = ans; j*j < n; j = j + factor){
      ans = j;
    }
  }
  return ans;
}
