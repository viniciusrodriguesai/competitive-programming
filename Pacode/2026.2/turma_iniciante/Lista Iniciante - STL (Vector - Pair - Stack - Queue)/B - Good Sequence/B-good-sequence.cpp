/*
 * Problem B - Good Sequence
 * Limite de tempo: 2000 ms
 *
 * Voce recebe uma sequencia de N numeros inteiros positivos:
 * a = (a1, a2, ..., aN).
 *
 * Remova alguns elementos para que a sequencia restante seja boa.
 * Uma sequencia e boa quando, para cada valor x presente nela,
 * x aparece exatamente x vezes.
 *
 * Exemplos de sequencias boas:
 * (3, 3, 3), (4, 2, 4, 1, 4, 2, 4) e a sequencia vazia.
 * Exemplos que nao sao boas:
 * (3, 3, 3, 3) e (2, 4, 1, 4, 2).
 *
 * Encontre o numero minimo de elementos que precisam ser removidos.
 *
 * Entrada:
 * - Primeira linha: N.
 * - Segunda linha: N inteiros a1, a2, ..., aN.
 *
 * Restricoes:
 * - 1 <= N <= 100000
 * - 1 <= ai <= 1000000000
 *
 * Saida:
 * - Imprima o numero minimo de remocoes para formar uma sequencia boa.
 *
 * Exemplo 1:
 * Entrada:
 * 4
 * 3 3 3 3
 * Saida:
 * 1
 *
 * Exemplo 2:
 * Entrada:
 * 5
 * 2 4 1 4 2
 * Saida:
 * 2
 *
 * Exemplo 3:
 * Entrada:
 * 6
 * 1 2 2 3 3 3
 * Saida:
 * 0
 *
 * Exemplo 4:
 * Entrada:
 * 1
 * 1000000000
 * Saida:
 * 1
 *
 * Exemplo 5:
 * Entrada:
 * 8
 * 2 7 1 8 2 8 1 8
 * Saida:
 * 5
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    long long contador = 1;

    vector<int> vetor;

    for (int i = 0; i < N; i++) {
        int numero;
        cin >> numero;
        vetor.push_back(numero);
    }

    sort(vetor.begin(), vetor.end());

    int remocao = 0;

    for (int i = 0; i + 1 < N; i++) {
        if (vetor[i] == vetor[i + 1]) {
            contador += 1;
        }
        else {
            if (contador == vetor[i]) {
            }
            else if (contador < vetor[i]) {
                remocao += contador;
            }
            else {
                remocao += contador - vetor[i];
            }
            contador = 1;
        }
    }

    int ultimoValor = vetor[N - 1];
    if (contador == ultimoValor) {
    }
    else if (contador < ultimoValor) {
        remocao += contador;
    }
    else {
        remocao += contador - ultimoValor;
    }

    cout << remocao;
    return 0;
}
