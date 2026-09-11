/*
 * ATIVIDADE OBRIGATÓRIA
 *
 * Vamos fazer um programa que simula uma fila de processos.
 *
 * Faça um programa que:
 * - leia um número inteiro N;
 * - leia N números inteiros e coloque-os em uma queue<int> usando .push();
 * - use um laço while enquanto a fila não estiver vazia: while (!q.empty());
 * - dentro do laço, imprima o número da frente (q.front()) seguido de espaço;
 * - remova o elemento da frente usando q.pop().
 *
 * Entrada de teste:
 * 4
 * 10 20 30 40
 *
 * Saída esperada:
 * 10 20 30 40
 *
 * A saída deve manter a mesma ordem de entrada dos números.
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
queue<int>q;

    int N;
    cin >> N;
    queue<int>fila;
    for(int i = 0; i < N; i++){
        int numeros;
        cin >> numeros;
        fila.push(numeros);

    }
    while(!fila.empty()){
        cout << fila.front() << " ";
        fila.pop();
    }
    return 0;
}
