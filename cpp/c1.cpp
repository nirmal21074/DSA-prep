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
        int count_liars = 0, count_truth_tellers = 0;
        for (int i = 0; i < n; i++) {
            cin >> l[i];
            if (l[i] == n) count_liars++;
            else if (l[i] == 0) count_truth_tellers++;
        }
        if (count_liars > n / 2 || count_truth_tellers > n / 2) {
            cout << -1 << endl;
        }
        else {
            int min_liars = max(0, count_liars - (n - count_truth_tellers));
            int max_liars = min(count_liars, count_truth_tellers);
            int num_liars = max(min_liars, n - max_liars);
            cout << num_liars << endl;
        }
    }
    return 0;
}
