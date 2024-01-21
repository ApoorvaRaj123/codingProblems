#include<bits.stdc++.h>
#include<iostream>

using namespace std;


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
