// #include <iostream>
// using namespace std;

// int main(){
//     long long t;
//     cin>>t;
//     long long l,r;
    
//     while(t--){
//         cin>>l>>r;
//         long long n = r-l+1;
//         long long sum =(n*(l+r))/2;
//         cout<<sum<<endl;

//     }
//     return 0;
// }

#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;  // Read the number of test cases

    for (int i = 0; i < T; ++i) {
        long long L, R;
        cin >> L >> R;  // Read L and R for the current test case
        
        long long total_sum = 0;
        for (long long num = L; num <= R; ++num) {
            total_sum += num;  // Add the current number to the sum
        }
        
        cout << total_sum << endl;  // Print the sum
    }

    return 0;
}