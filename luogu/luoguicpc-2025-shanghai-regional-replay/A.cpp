#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> pai(n+1),nivel(n+1);
        vector<vector<int>> filhos(n+1);
        int maior=0;
        for(int i=2;i<=n;i++){
            cin>>pai[i];
            filhos[pai[i]].push_back(i);
            nivel[i]=nivel[pai[i]]+1;
            maior=max(maior,nivel[i]);
        }
