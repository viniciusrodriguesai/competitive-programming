#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, q;
    cin >> n >> q;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x;cin >> x;v.push_back(x);
    }for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        int l = 0;
        int r = n - 1;
        int ans = -1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (v[mid] == x) {
                ans = mid;r = mid - 1;}
            else if (v[mid] < x) {
                l = mid + 1;}
            else {r = mid - 1;}
        }
        cout << ans << "\n";
    }
    return 0;
}
