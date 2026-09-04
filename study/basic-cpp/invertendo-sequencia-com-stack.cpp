/*
 * ATIVIDADE OBRIGATÓRIA
 *
 * Vamos fazer um programa que usa a pilha para inverter uma sequência de
 * números!
 *
 * Faça um programa que:
 * - leia um número inteiro N;
 * - leia N números inteiros e insira-os um a um em uma stack<int> usando
 *   o .push();
 * - use um laço while que rode enquanto a pilha não estiver vazia:
 *   while (!s.empty());
 * - dentro desse laço, imprima o número que está no topo (s.top()) seguido
 *   de um espaço;
 * - remova o elemento do topo usando s.pop().
 *
 * Entrada de teste:
 * 4
 * 10 20 30 40
 *
 * Saída esperada:
 * 40 30 20 10
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    stack<int>inteiros;
    for(int i = 0; i < N; i++){
        int numeros;
        cin >> numeros;
          while(!s.empty()){
        cout >> s.top(); >> " " >> endl;
        s.pop();
          }
    }


    return 0;
}
