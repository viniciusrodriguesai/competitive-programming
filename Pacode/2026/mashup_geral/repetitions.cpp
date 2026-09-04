    /*
     * C - Repetitions
     *
     * Você recebe uma sequência de DNA: uma string formada pelos caracteres
     * A, C, G e T.
     *
     * Sua tarefa é encontrar a repetição mais longa na sequência. Uma repetição
     * é uma substring de comprimento máximo que contém apenas um tipo de caractere.
     *
     * Entrada:
     * A única linha da entrada contém uma string de n caracteres.
     *
     * Saída:
     * Imprima um número inteiro: o comprimento da repetição mais longa.
     *
     * Restrições:
     * 1 <= n <= 10^6
     *
     * Exemplo de entrada:
     * ATTCGGGA
     *
     * Exemplo de saída:
     * 3
     */

#include <bits/stdc++.h>
using namespace std;
int main() {
    string dna;
    cin >> dna;
    int atual =1;
    int maior = 1 ;


    for (int i = 1; i < dna.size();  i++){
        if(dna[i] == dna[i - 1]){
            atual++;
            maior = max(maior , atual);
        }else{
        atual = 1}
    }
    cout << maior;
    return 0;
}
