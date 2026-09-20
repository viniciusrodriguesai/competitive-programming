#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int quantidade;
    cin >> quantidade;
    deque <int> numeros;
    for(int i = 0; i < quantidade; i++){
        int operacao, posicao,  numero; 
        cin >> operacao ;
        if(operacao == 0){
            cin >> posicao;
            cin >> numero;
            if(posicao == 0){
                numeros.push_front(numero);
        }else if(posicao == 1){
            numero.push_back(numero);
        }
        }
    }



    return 0;
}
