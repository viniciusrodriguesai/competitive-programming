#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> values(n);
    for (int &x : values) cin >> x;

    int m;
    cin >> m;

    vector<vector<int>> table;
    vector<int> gaps;
    for (int i = 0; i + 1 < n; i++) gaps.push_back(values[i + 1] - values[i]);
    table.push_back(gaps);

    for (int k = 1; (1 << k) <= n - 1; k++) {
        int half = 1 << (k - 1);
        int length = n - (1 << k);
        vector<int> row(length);
        for (int i = 0; i < length; i++) row[i] = max(table[k - 1][i], table[k - 1][i + half]);
        table.push_back(row);
    }

    while (m--) {
        int t, d;
        cin >> t >> d;
        int pos = upper_bound(values.begin(), values.end(), t) - values.begin() - 1;

        for (int k = (int)table.size() - 1; k >= 0; k--) {
            int jump = 1 << k;
            if (pos >= jump && table[k][pos - jump] <= d) pos -= jump;
        }

        cout << pos + 1 << '\n';
    }
}
