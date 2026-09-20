#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int casos;
    int quantidade;
    int carta;
    cin >> casos;
    for(int i = 0; i < casos; i++){
        cin >> quantidade;
            long long soma = 0;
        priority_queue<int> fila;
        for (int j = 0; j < quantidade; j++){
            cin >> carta;
            if(carta > 0){
                fila.push(carta);
            }
            else if (carta == 0) {
                if (!fila.empty()){
                    soma += fila.top();
                    fila.pop();
                }
            }
        }cout << soma << endl;
    }
    return 0;
}
