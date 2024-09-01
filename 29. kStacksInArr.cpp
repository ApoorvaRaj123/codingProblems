#include <iostream>
#include <vector>
#include <stdexcept>

class KStacks {
private:
    int n;
    int k;
    std::vector<int> arr; 
    std::vector<int> top; 
    std::vector<int> next; 

    int free;

public:
    KStacks(int k, int n) : k(k), n(n), arr(n), top(k, -1), next(n) {
                for (int i = 0; i < n - 1; ++i) {
            next[i] = i + 1;
        }
        next[n - 1] = -1; 
        free = 0;     }

    bool isFull() {
        return free == -1;
    }

    bool isEmpty(int sn) {
        return top[sn] == -1;
    }

    void push(int item, int sn) {
        if (isFull()) {
            throw std::overflow_error("Stack Overflow");
        }

        int i = free; 

        free = next[i];

        next[i] = top[sn];

        top[sn] = i;

        arr[i] = item;
    }
    int pop(int sn) {
        if (isEmpty(sn)) {
            throw std::underflow_error("Stack Underflow");
        }

        int i = top[sn];

        top[sn] = next[i];

        next[i] = free;
        free = i;

        return arr[i];
    }

    int peek(int sn) {
        if (isEmpty(sn)) {
            throw std::underflow_error("Stack Underflow");
        }
        return arr[top[sn]];
    }
};

int main() {
    int k = 3, n = 10;
    KStacks ks(k, n);

    ks.push(15, 2);
    ks.push(45, 2);

    ks.push(17, 1);
    ks.push(49, 1);
    ks.push(39, 1);

    ks.push(11, 0);
    ks.push(9, 0);
    ks.push(7, 0);

    std::cout << "Popped element from stack 2 is " << ks.pop(2) << std::endl;
    std::cout << "Popped element from stack 1 is " << ks.pop(1) << std::endl;
    std::cout << "Popped element from stack 0 is " << ks.pop(0) << std::endl;

    return 0;
}
