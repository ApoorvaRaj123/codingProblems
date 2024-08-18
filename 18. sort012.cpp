#include <bits/stdc++.h>

void sort012(int *arr, int n) {

  int i = 0, m = 0, e = n - 1;

  while (m <= e) {
    if (arr[m] == 0) {
      swap(arr[i], arr[m]);
      m++;
      i++;
    } else if (arr[m] == 1) {
      m++;
    } else if (arr[m] == 2) {
      swap(arr[m], arr[e]);
      e--;
    }
  }
}
