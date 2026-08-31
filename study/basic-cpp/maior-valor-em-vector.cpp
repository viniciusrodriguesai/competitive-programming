/*
 * Maior Valor em um Vector
 *
 * Faça um programa que:
 * - leia um número inteiro N;
 * - leia N números inteiros e armazene-os em um vector;
 * - encontre o maior valor dentro do vector usando a lógica estudada;
 * - imprima o maior valor encontrado.
 *
 * Entrada de teste:
 * 5
 * 10 8 25 7 2
 *
 * Saída esperada:
 * 25
 */
 #include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector <int>v;
    for(int i = 0; i < n ;i++){
        cin >> v[i];
        v.push_back(v);
    }
    int maior = v[0];
    for (int i = 0; i < n; i++) {
    if (v[i] > maior) {
        maior = v[i]; // Atualiza o campeão
    }
}


    return 0;
}
