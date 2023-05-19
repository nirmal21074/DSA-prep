#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> l(n);
        int sum_l = 0;
        for (int i = 0; i < n; i++) {
            cin >> l[i];
            sum_l += l[i];
        }
        int sum_t = 0;
        for (int i = 0; i < n; i++) {
            if (l[i] == 0) sum_t++;
        }
        if (sum_t > n/2) {
            cout << "-1\n";
            continue;
        }
        int sum_f = n - sum_l + sum_t;
        cout << max(sum_f, sum_t) << "\n";
    }
    return 0;
}
