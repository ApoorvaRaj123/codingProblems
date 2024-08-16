#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s) {

  vector<vector<int>> ans;

  for (int i = 0; i < arr.size() - 1; i++) {

    for (int j = i + 1; j <= arr.size() - 1; j++) {

      if (arr[i] + arr[j] == s) {
        vector<int> pair;

        pair.push_back(min(arr[i], arr[j]));
        pair.push_back(max(arr[i], arr[j]));
        
        ans.push_back(pair);
      }
    }
  }

  sort(ans.begin(), ans.end());

  return ans;
}
