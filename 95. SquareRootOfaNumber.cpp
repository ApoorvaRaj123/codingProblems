#include <bits/stdc++.h>
using namespace std;

double squareRoot(int n, int p) {
    int start = 0, end = n;
    double ans = 0.0;
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if ((long long)mid * mid <= n) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    double increment = 0.1;
    for (int i = 0; i < p; i++) {
        while ((ans + increment) * (ans + increment) <= n) {
            ans += increment;
        }
        increment /= 10;
    }

    return ans;
}

int main() {
    int n = 50, p = 3;

    cout << fixed << setprecision(3) << squareRoot(n, p) << endl;

    return 0;
}
