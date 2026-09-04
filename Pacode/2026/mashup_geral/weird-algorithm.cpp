    /*
     * A - Weird Algorithm
     *
     * Considere um algoritmo que recebe como entrada um número inteiro positivo n.
     * Se n for par, o algoritmo divide o número por dois. Se n for ímpar, o
     * algoritmo multiplica o número por três e soma um.
     *
     * O algoritmo repete esse processo até que n seja igual a um.
     *
     * Por exemplo, para n = 3, a sequência é:
     * 3 -> 10 -> 5 -> 16 -> 8 -> 4 -> 2 -> 1
     *
     * Sua tarefa é simular a execução do algoritmo para um determinado valor de n.
     *
     * Entrada:
     * A única linha da entrada contém um número inteiro n.
     *
     * Saída:
     * Imprima uma linha contendo todos os valores de n durante a execução do
     * algoritmo.
     *
     * Restrições:
     * 1 <= n <= 10^6
     *
     * Exemplo de entrada:
     * 3
     *
     * Exemplo de saída:
 * 3 10 5 16 8 4 2 1
 */

    #include <bits/stdc++.h>
    using namespace std;
    int main() {
        long long kkk;cin>>kkk;
        //faz a conta dessa bagaça
        while (kkk>1) {
                //ler a bosta do numero
            cout<<kkk<<"";
        //da o resultado final nessa bosta
            kkk=(kkk%2==0)?(kkk/2):(kkk*3+1);
        }
        cout<<kkk;
    }
