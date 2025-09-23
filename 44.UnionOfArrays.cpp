#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findUnion(vector<int>& a, vector<int>& b) {
    vector<int> res;
  
  	for(int i = 0; i < a.size(); i++){
      
      	// check if the element is already 
        // in the result to avoid duplicates
        int j;
        for (j = 0; j < res.size(); j++) {
            if (res[j] == a[i]) 
                break;
        }
        if (j == res.size())
            res.push_back(a[i]);
  	}


  	for(int i = 0; i < b.size(); i++){
      
      	// check if the element is already 
        // in the result to avoid duplicates
        int j;
        for (j = 0; j < res.size(); j++) {
            if (res[j] == b[i]) 
              break;
        }
        if (j == res.size())
            res.push_back(b[i]);
  	}
    
  	sort(res.begin(), res.end());
    return res;
}

int main() {
    vector<int> a = {1, 1, 2, 2, 2, 4};
    vector<int> b = {2, 2, 4, 4};

    vector<int> res = findUnion(a, b);
  
    for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";

    return 0;
}
