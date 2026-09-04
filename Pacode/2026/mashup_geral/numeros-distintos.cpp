/*
 * H - Números Distintos
 *
 * Você recebe uma lista de n inteiros, e sua tarefa é calcular o número de
 * valores distintos na lista.
 *
 * Entrada:
 * A primeira linha da entrada contém um número inteiro n: o número de valores.
 *
 * A segunda linha contém n números inteiros: x1, x2, ..., xn.
 *
 * Saída:
 * Imprima um número inteiro: a quantidade de valores distintos.
 *
 * Restrições:
 * 1 <= n <= 2 * 10^5
 * 1 <= xi <= 10^9
 *
 * Exemplo de entrada:
 * 5
 * 2 3 2 2 3
 *
 * Exemplo de saída:
 * 2
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int quantidade_de_doidos;
    cin >> quantidade_de_doidos;
    set<int>juliano_moreira;
    for(int i = 0; i < quantidade_de_doidos; i++){
        int doidinho;
        cin >> doidinho;

        juliano_moreira.insert(doidinho);
    }
    cout << juliano_moreira.size();
    return 0;
}
