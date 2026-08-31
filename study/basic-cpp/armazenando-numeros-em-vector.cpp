    /*
     * Armazenando Números em um Vector
     *
     * Faça um programa que:
     * - leia um número inteiro N;
     * - leia N números inteiros do teclado;
     * - armazene os N números em um vector usando push_back();
     * - use um segundo laço for para percorrer o vector;
     * - imprima todos os valores armazenados, separados por um espaço.
     *
     * Entrada de teste:
     * 5
     * 10 8 3 7 2
     *
     * Saída esperada:
     * 10 8 3 7 2
     */
#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,Numeros;
    cin >> n;
    vector<int> v; // cria um vector

    for(int i = 0; i < n ;i++){
        cin >> Numeros;
        v.push_back(Numeros);
    }
    for(int i= 0; i < n; i++){

        cout << v[i] << " ";
    }

    return 0;
}
