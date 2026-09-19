#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    while (cin >> n >> m) {
        vector<int> lg(n + 1);
        for (int i = 2; i <= n; i++) lg[i] = lg[i / 2] + 1;
        vector<vector<long long>> st(lg[n] + 1, vector<long long>(n));
        for (auto &x : st[0]) cin >> x;
        for (int k = 1; k <= lg[n]; k++) {
            int length = 1 << k;
            for (int i = 0; i + length <= n; i++) {
                st[k][i] = max(st[k - 1][i], st[k - 1][i + length / 2]);
            }
        }
        int answer = 0;
        while (m--) {
            int from, to;
            cin >> from >> to;
            int left = min(from, to), right = max(from, to);
            if (right - left <= 1) {
                answer++;
                continue;
            }
            int first = left, last = right - 2;
            int k = lg[last - first + 1], length = 1 << k;
            long long highest = max(st[k][first], st[k][last - length + 1]);
            if (highest <= st[0][from - 1]) answer++;
        }
        cout << answer << '\n';
    }
    return 0;
}
