#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};



int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    Node* root = arrayToList(arr, n);
    display(root);
    return 0;
}
