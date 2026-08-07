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
        vector<int> cand;
        for(int i=1;i<=n;i++){
            if(nivel[i]==d) cand.push_back(i);
        }
        auto dentro=[&](int u,int v){
            return tin[u]<=tin[v]&&tin[v]<=tout[u];
        };
        vector<int> qtd(n+1);
        while(cand.size()>1){
            fill(qtd.begin(),qtd.end(),0);
            for(int v:cand) qtd[v]=1;
            for(int i=n;i>=2;i--) qtd[pai[i]]+=qtd[i];
            int tam=cand.size();
            int melhor=-1;
            int valor=tam+1;
            for(int u=1;u<=n;u++){
                if(qtd[u]==0||qtd[u]==tam) continue;
                int pior=max(qtd[u],tam-qtd[u]);
                if(pior<valor){
                    valor=pior;
                    melhor=u;
                }
            }
            int resp=pergunta(melhor,d-nivel[melhor]);
            vector<int> prox;
            for(int v:cand){
                bool in=dentro(melhor,v);
                if((resp&&in)||(!resp&&!in)) prox.push_back(v);
            }
            cand.swap(prox);
        }
