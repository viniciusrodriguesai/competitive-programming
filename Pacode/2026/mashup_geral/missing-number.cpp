/*
 * B - Missing Number
 *
 * Você recebe todos os números entre 1, 2, ..., n, exceto um.
 * Sua tarefa é encontrar o número que está faltando.
 *
 * Entrada:
 * A primeira linha da entrada contém um número inteiro n.
 *
 * A segunda linha contém n - 1 números. Cada número é distinto e está
 * entre 1 e n, inclusive.
 *
 * Saída:
 * Imprima o número que está faltando.
 *
 * Restrições:
 * 2 <= n <= 2 * 10^5
 *
 * Exemplo de entrada:
 * 5
 * 2 3 1 5
 *
 * Exemplo de saída:
 * 4
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    long long fds;cin>> fds; // quantos numeros coloco nessa bosta
    // calcular ate o 1
    long long ladrao=(fds*(fds+1))/2;
    // vendo quem dessa merda aparece
    for (int sumiu=0;sumiu<fds-1;sumiu++){
        long long numero_bosta;cin>>numero_bosta;
        ladrao-=numero_bosta; // Descobre quem roubou por uma cervejinha sumiu
    }// Mostra quantos foram pra vala
    cout<<ladrao;
    return 0;
}
