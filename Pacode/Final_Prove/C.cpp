#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    long long x;
    cin >> n >> x;
    vector<pair<long long, int>> v;
    for (int i = 0; i < n; i++) {
        long long valor;
        cin >> valor;
        v.push_back({valor, i + 1});
    }
    sort(v.begin(), v.end());
}
