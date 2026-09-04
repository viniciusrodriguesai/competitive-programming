/*
 * D - Increasing Array
 *
 * Você recebe um array com n números inteiros. Sua tarefa é modificar o array
 * para que ele fique crescente, isto é, cada elemento deve ser pelo menos tão
 * grande quanto o elemento anterior.
 *
 * Em cada movimento, você pode aumentar o valor de qualquer elemento em uma
 * unidade. Qual é o menor número de movimentos necessários?
 *
 * Entrada:
 * A primeira linha da entrada contém um número inteiro n: o tamanho do array.
 *
 * A segunda linha contém n números inteiros: x1, x2, ..., xn, os elementos do
 * array.
 *
 * Saída:
 * Imprima o número mínimo de movimentos necessários.
 *
 * Restrições:
 * 1 <= n <= 2 * 10^5
 * 1 <= xi <= 10^9
 *
 * Exemplo de entrada:
 * 5
 * 3 2 5 1 7
 *
 * Exemplo de saída:
 * 5
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;    long long anterior;
    cin >> n;
    cin >> anterior;long long movimentos = 0;
    for (int i = 1; i < n; i++) {
        long long atual;cin >> atual;
        if (atual < anterior) {
            movimentos += anterior - atual;
            atual = anterior;}anterior = atual;}
    cout << movimentos;
    return 0;
}
