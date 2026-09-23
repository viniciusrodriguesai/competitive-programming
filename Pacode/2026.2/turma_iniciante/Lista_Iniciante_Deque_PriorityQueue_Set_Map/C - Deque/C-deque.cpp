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
            numeros.push_back(numero);
        }
        }else if(operacao == 1){
            cin >> posicao;
            cout << numeros[posicao] << " ";
              }
        else if(operacao == 2){
            cin >> posicao;
            if(posicao == 0){
                numeros.pop_front();
            }else if(posicao == 1){
                numeros.pop_back();
            }
        }
    }



    return 0;
}
