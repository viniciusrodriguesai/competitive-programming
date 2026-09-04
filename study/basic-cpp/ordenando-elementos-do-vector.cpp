/*
 * Ordenando Elementos do Vector
 *
 * Vamos colocar esse novo conhecimento para rodar no seu computador!
 *
 * Faça um programa que:
 * - leia um número inteiro N;
 * - leia N números inteiros e coloque-os em um vector;
 * - ordene os elementos do seu vector usando o sort();
 * - imprima os elementos do vector ordenados, separados por um espaço.
 *
 * Entrada de teste:
 * 5
 * 10 8 3 7 2
 *
 * Saída esperada:
 * 2 3 7 8 10
 */
#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    vetor = sort(v.begin(), v.end());

    cout << vetor << " ";
    return 0;
}
