/*
 * ATIVIDADE OBRIGATÓRIA
 *
 * Vamos praticar isso com um exemplo simples no Code::Blocks!
 *
 * Faça um programa que:
 * - crie uma função do tipo void chamada dobra que receba um número inteiro
 *   por referência (int &x);
 * - dentro dessa função, multiplique o valor de x por 2;
 * - no seu main, leia um número inteiro N;
 * - chame a função dobra(N);
 * - imprima o valor final de N.
 *
 * Entrada de teste:
 * 5
 *
 * Saída esperada:
 * 10
 */

#include <bits/stdc++.h>
using namespace std;
    void dobra(int &num){
        num *= 2;

    }
int main() {
    int N = 10
    dobra(N);
    cout >> N;

    return 0;
}
