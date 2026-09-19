#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<long long, int>> events;
    for (int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;
        events.push_back({a, 1});
        events.push_back({b, -1});
    }
    sort(events.begin(), events.end());
    int current = 0, answer = 0;
    for (auto [time, change] : events) {
        current += change;
        answer = max(answer, current);
    }
    cout << answer << '\n';
    return 0;
}
