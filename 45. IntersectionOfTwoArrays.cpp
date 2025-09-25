#include <iostream>
#include <vector>
using namespace std;

vector<int> intersect(vector<int>& a, vector<int>& b) {
    vector<int> res;

    for (int i = 0; i < a.size(); i++) {    
        for (int j = 0; j < b.size(); j++) {
          
            
            if (a[i] == b[j]) { 
                int k;
                for (k = 0; k < res.size(); k++) 
                    if (res[k] == a[i]) 
                        break;
                if (k == res.size()) {
                    res.push_back(a[i]);
                }
            }
        }
    }

    return res;
}

int main() {
    vector<int> a = {1, 2, 3, 2, 1};
    vector<int> b = {3, 2, 2, 3, 3, 2};

    vector<int> res = intersect(a, b);
  
    for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";

    return 0;
}
