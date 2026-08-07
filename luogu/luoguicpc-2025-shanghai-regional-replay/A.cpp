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
        auto pergunta=[&](int u,int k){
            cout<<"? "<<u<<" "<<k<<endl;
            int x;
            cin>>x;
            if(x==-1) exit(0);
            return x;
        };
        int l=-1,r=maior;
        while(r-l>1){
            int m=(l+r)/2;
            if(pergunta(1,m)) r=m;
            else l=m;
        }
        int d=r;
        vector<int> tin(n+1),tout(n+1);
        int tempo=0;
        function<void(int)> dfs=[&](int u){
            tin[u]=++tempo;
            for(int v:filhos[u]) dfs(v);
            tout[u]=tempo;
        };
        dfs(1);
