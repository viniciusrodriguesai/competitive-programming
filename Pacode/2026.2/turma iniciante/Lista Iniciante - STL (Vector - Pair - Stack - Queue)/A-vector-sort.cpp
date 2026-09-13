/*
 * Problem A - Vector-Sort
 *
 * Voce recebeu N numeros inteiros. Ordene esses numeros e imprima-os
 * em ordem crescente.
 *
 * Para armazenar os numeros, use um vector<int>. Vectors sao containers
 * sequenciais que funcionam como vetores de tamanho variavel.
 *
 * Entrada:
 * - A primeira linha contem N, a quantidade de numeros inteiros.
 * - A segunda linha contem os N numeros inteiros.
 *
 * Saida:
 * - Imprima os numeros em ordem crescente, todos na mesma linha,
 *   separados por espaco.
 *
 * Exemplo de entrada:
 * 5
 * 1 6 10 8 4
 *
 * Exemplo de saida:
 * 1 4 6 8 10
 *
 * Dica: vector<int> v; e sort(v.begin(), v.end());
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long Numero,Numeros;

    cin >> Numero >> Numeros;

    vector <int> vetor;

    sort(vetor.begin(), vetor.end())

    return 0;
}
