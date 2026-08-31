/*
 * Atividade de Nivelamento
 *
 * Faça um programa que:
 * - leia um número inteiro N, que representa a quantidade de números;
 * - leia N números inteiros;
 * - calcule e imprima a soma apenas dos números pares.
 *
 * Entrada de teste:
 * 5
 * 2 7 3 8 10
 *
 * Saída esperada:
 * 20
 *
 * Explicação: os números pares são 2, 8 e 10.
 * A soma é 2 + 8 + 10 = 20.
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
int N;
cin >> N; // Lemos apenas a quantidade de números primeiro
int soma = 0;
for(int i = 0; i < N;i++){
    int numero;
    cin >> numero;
    if(numero % 2 == 0){
        soma += numero;
    }

}
cout << soma;
    return 0;
}


