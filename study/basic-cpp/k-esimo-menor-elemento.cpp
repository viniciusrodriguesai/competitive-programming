    /*
     * ATIVIDADE OBRIGATÓRIA
     *
     * Chegou a hora de aplicar tudo o que você aprendeu em um único programa
     * no Code::Blocks!
     *
     * Problema:
     * Faça um programa que leia uma sequência de números, ordene-os e encontre
     * o K-ésimo menor elemento da lista.
     *
     * Instruções de codificação:
     * - leia o número inteiro N (quantidade de elementos) e o número inteiro K
     *   (a posição que queremos encontrar);
     * - leia os N números seguintes e guarde-os em um vector;
     * - ordene o vector de forma crescente;
     * - imprima o K-ésimo menor elemento.
     *
     * Entrada de teste:
     * 5 3
     * 10 8 3 7 2
     *
     * Aqui, N = 5 e K = 3. Os números são: 10, 8, 3, 7, 2.
     *
     * Saída esperada:
     * 7
     */
    #include <bits/stdc++.h>
    using namespace std;
    int main(){

        int vitimas,alvo;
        cin >> vitimas >> alvo;
        vector<int>hospicio;
        for(int i = 0; i  < vitimas; i++){
            int b_o;
            cin >> b_o;
            hospicio.push_back(b_o); //joga o doido pra dentro do juliano moreira
        }
        //organiza os malucos pra fila ficar certo
        sort(hospicio.begin(), hospicio.end());
        //mostra quem são os doentes na fila
        cout << hospicio[alvo - 1] << endl;

        return 0;
    }
