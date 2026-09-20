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
        priority_queue<int> fila;
        for (int j = 0; j < quantidade; j++){
            cin >> carta;
            if(carta > 0){
                fila.push(carta)
            }
        }
    }
    return 0;
}
