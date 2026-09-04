/*
 * I - Apartments
 *
 * Existem n candidatos e m apartamentos disponíveis. Sua tarefa é distribuir
 * os apartamentos para que o maior número possível de candidatos consiga um.
 *
 * Cada candidato possui um tamanho desejado e aceitará um apartamento cujo
 * tamanho esteja suficientemente próximo. Para um tamanho desejado x, o
 * apartamento deve ter tamanho entre x - k e x + k.
 *
 * Entrada:
 * A primeira linha contém três inteiros n, m e k: o número de candidatos, o
 * número de apartamentos e a diferença máxima permitida.
 * A segunda linha contém n inteiros com os tamanhos desejados pelos candidatos.
 * A última linha contém m inteiros com os tamanhos dos apartamentos.
 *
 * Saída:
 * Imprima o número de candidatos que conseguirão um apartamento.
 *
 * Restrições:
 * 1 <= n, m <= 2 * 10^5
 * 0 <= k <= 10^9
 * 1 <= ai, bi <= 10^9
 *
 * Exemplo de entrada:
 * 4 3 5
 * 60 45 80 60
 * 30 60 75
 *
 * Exemplo de saída:
 * 2
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0,j=0,resposta=0;
    while(i<n&&j<m){
        if(b[j]<a[i]-k){
            j++;
}
        else if(b[j]>a[i]+k){
            i++;
}
        else{
            resposta++;
            i++;
            j++;
        }
