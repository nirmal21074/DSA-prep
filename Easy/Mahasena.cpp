#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int weapons[N];
    for (int i = 0; i < N; i++) {
        cin >> weapons[i];
    }
    for (int i = 0; i < N; i++) {
        cout<<"so"<<weapons[i];
    }

    // int totalWeapons = 0;
    // for (int i = 0; i < N; i++) {
    //     totalWeapons += weapons[i];
    // }

    // cout << "Total number of weapons: " << totalWeapons << endl;

    return 0;
}