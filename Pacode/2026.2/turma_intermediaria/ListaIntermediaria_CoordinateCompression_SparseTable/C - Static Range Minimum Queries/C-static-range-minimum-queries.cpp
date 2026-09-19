#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<int> lg(n + 1);
    for (int i = 2; i <= n; i++) lg[i] = lg[i / 2] + 1;
    vector<vector<int>> st(lg[n] + 1, vector<int>(n));
    for (int &x : st[0]) cin >> x;
    for (int k = 1; k <= lg[n]; k++) {
        int length = 1 << k;
        for (int i = 0; i + length <= n; i++) {
            st[k][i] = min(st[k - 1][i], st[k - 1][i + length / 2]);
        }
    }
    while (q--) {
        int l, r;
        cin >> l >> r;
        l--; r--;
        int k = lg[r - l + 1], length = 1 << k;
        cout << min(st[k][l], st[k][r - length + 1]) << '\n';
    }
    return 0;
}
