#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

struct wire {
    int x, y;
};

bool compare(wire a, wire b) {
    return a.x < b.x;
}

bool intersect(wire a, wire b) {
    return (a.x < b.y) && (b.x < a.y);
}

int merge_sort_count(wire segments[], int l, int r) {
    if (l >= r) return 0;
    int mid = l + (r - l) / 2;
    int count = merge_sort_count(segments, l, mid) + merge_sort_count(segments, mid + 1, r);
    int i = l, j = mid + 1, k = 0;
    wire temp[r - l + 1];
    while (i <= mid && j <= r) {
        if (segments[i].y <= segments[j].y) {
            temp[k++] = segments[i++];
        } else {
            count += mid - i + 1;
            temp[k++] = segments[j++];
        }
    }
    while (i <= mid) temp[k++] = segments[i++];
    while (j <= r) temp[k++] = segments[j++];
    for (i = l, k = 0; i <= r; i++, k++) segments[i] = temp[k];
    return count;
}

int solve(int n, wire segments[]) 
{
    int ans = merge_sort_count(segments, 0, n - 1);
    return ans;
}


int main() {
    int n;
    cin >> n;
    wire segments[n];
    for (int i = 0; i < n; i++) 
    {
        int p, q;
        cin >> p >> q;
        
        segments[i].x = p;
        segments[i].y = q;
    
    }
    cout << solve(n, segments) << endl;
    return 0;
}