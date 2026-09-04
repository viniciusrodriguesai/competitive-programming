/*
 * E - Permutations
 *
 * Uma permutação dos números inteiros 1, 2, ..., n é considerada bonita se
 * não houver dois elementos adjacentes cuja diferença seja igual a 1.
 *
 * Dado n, construa uma permutação bonita, caso ela exista.
 *
 * Entrada:
 * A única linha da entrada contém um número inteiro n.
 *
 * Saída:
 * Imprima uma permutação bonita dos números 1, 2, ..., n. Se houver várias
 * soluções, você pode imprimir qualquer uma delas. Se não houver solução,
 * imprima "NO SOLUTION".
 *
 * Restrições:
 * 1 <= n <= 10^6
 *
 * Exemplo 1 - entrada:
 * 5
 *
 * Exemplo 1 - saída:
 * 4 2 5 3 1
 *
 * Exemplo 2 - entrada:
 * 3
 *
 * Exemplo 2 - saída:
 * NO SOLUTION
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n==2||n==3){
        cout<<"NO SOLUTION";
    return 0;
}
    for(int i=2;i<=n;i+=2){
        cout<<i<<" ";
}
    for(int i=1;i<=n;i+=2){
        cout<<i<<" ";
}
}
