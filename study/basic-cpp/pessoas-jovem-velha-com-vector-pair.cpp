/*
 * ATIVIDADE OBRIGATÓRIA
 *
 * Faça um programa que:
 *n - leia um número inteiro N (quantidade de pessoas);
 * - leia N linhas, cada uma contendo a idade e o nome de uma pessoa;
 * - guarde todas as pessoas em um vector<pair<int, string>>;
 * - ordene o vetor usando o sort();
 * - imprima o nome da pessoa mais jovem e o nome da pessoa mais velha,
 *   separados por um espaço.
 *
 * Entrada de teste:
 * 3
 * 25 Batman
 * 35 Coringa
 * 18 Robin
 *
 * Saída esperada:
 * Robin Coringa
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, string>> lista;
    for (int i = 0; i < n; i++) {
        int idade;
        string nome;
        cin >> idade >> nome;

        lista.push_back({idade, nome});
    }

    sort(lista.begin(), lista.end());


    cout << lista[0].second << " " << lista[n - 1].second << endl;

    return 0;
}
