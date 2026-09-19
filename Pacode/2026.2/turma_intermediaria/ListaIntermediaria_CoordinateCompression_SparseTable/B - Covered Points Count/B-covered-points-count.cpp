#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<long long, int>> events;
    for (int i = 0; i < n; i++) {
        long long l, r;
        cin >> l >> r;
        events.push_back({l, 1});
        events.push_back({r + 1, -1});
    }
    sort(events.begin(), events.end());
    vector<long long> answer(n + 1);
    long long previous = events[0].first;
    int covering = 0;
    for (int i = 0; i < (int)events.size();) {
        long long x = events[i].first;
        if (covering) answer[covering] += x - previous;
        while (i < (int)events.size() && events[i].first == x) {
            covering += events[i].second;
            i++;
        }
        previous = x;
    }
    for (int i = 1; i <= n; i++) {
        if (i > 1) cout << ' ';
        cout << answer[i];
    }
    cout << '\n';
    return 0;
}
