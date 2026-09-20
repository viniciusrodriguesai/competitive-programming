#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int numero;
    string comando;
    priority_queue<int> fila;
    cin >> comando;
    while(comando != "end" ){
            if(comando == "insert"){
                    cin >> numero;
                    fila.push(numero);
            }else if (comando == "extract"){
                cout << fila.top() << endl;
                fila.pop();
            }cin >> comando;
            
    }
    return 0;
}
