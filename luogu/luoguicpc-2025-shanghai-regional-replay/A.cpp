#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int> p(n+1),dep(n+1),tin(n+1),tout(n+1),cnt(n+1);
        vector<vector<int>> g(n+1);
        int mx=0;
        for(int i=2;i<=n;i++){
            cin>>p[i];
            g[p[i]].push_back(i);
            dep[i]=dep[p[i]]+1;
            mx=max(mx,dep[i]);
        }
