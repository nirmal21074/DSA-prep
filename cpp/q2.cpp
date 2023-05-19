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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int max_val = *max_element(a.begin(), a.end());
        bool palindrome_found = false;
        for (int x = max_val; x >= 1; x--) {
            vector<int> f(n);
            for (int i = 0; i < n; i++) {
                f[i] = a[i] % x;
            }
            bool is_palindrome = true;
            for (int i = 0; i < n / 2; i++) {
                if (f[i] != f[n - i - 1]) {
                    is_palindrome = false;
                    break;
                }
            }
            if (is_palindrome) {
                cout << x << endl;
                palindrome_found = true;
                break;
            }
        }
        if (!palindrome_found) {
            cout << "0" << endl;
        }
    }
    return 0;
}
