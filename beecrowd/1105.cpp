/* com o elevado número de debêntures e bancos envolvidos, essa tarefa é extremamente complicada, e portanto ele pediu a sua ajuda para escrever um programa que, dados os bancos e as debêntures emitidas, determine se é possível que todos os bancos paguem suas dívidas, utilizando suas reservas monetárias e seus créditos.

Entrada
A entrada contém vários casos de teste. A primeira linha de um caso de teste contém dois inteiros B e N, indicando respectivamente o número de bancos (1 ≤ B ≤ 20) e o número de debêntures emitidas pelos bancos (1 ≤ N ≤ 20). Os bancos são identificados por inteiros entre 1 e B. A segunda linha contém B inteiros Ri separados por espaços, indicando as reservas monetárias de cada um dos B bancos (0 ≤ Ri ≤ 104, para 1 ≤ i ≤ B). As N linhas seguintes contêm cada uma três inteiros separados por espaços: um inteiro D, indicando o banco devedor (1 ≤ D ≤ B), um inteiro C, indicando o banco credor (1 ≤ C ≤ B e D ≠ C), e um inteiro V, indicando o valor da debênture (1 ≤ V ≤ 104).

O final da entrada é indicado por uma linha que contém apenas dois zeros, separados por um espaço em branco.

Saída
Para caso de teste, seu programa deve imprimir uma única linha, contendo um único caractere: 'S', se for possível liquidar todos as debêntures sem intervenção do Banco Central da Nlogônia, e 'N', se algum banco precisar de empréstimos do governo para liquidar suas debêntures.
*/
#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;


int main ()
{
    int n, b, x;
    int b1,b2,v;

    /*ifstream file("entrada.txt");
    if (file.is_open())
        cin.rdbuf(file.rdbuf());*/

    while(true)
    {

        cin >> b;

        if(!std::cin)
            break;

        cin >> n;

        if(b == 0 && n ==0)
            break;

        int vet[b];

        for(int i = 0; i < b; i++)
        {
            cin >> x;
            vet[i] = x;
        }
        for(int j = 0; j < n; j++)
        {
            cin >> b1;
            cin >> b2;
            cin >> v;

            vet[b1-1] -= v;
            vet[b2-1] += v;
        }
        int cont = 0;
        string a = "S";

        for(int i = 0; i < b; i++)
        {
            if(vet[i] < 0)
            {
                a = "N";
                break;
            }
        }

        cout << a << endl;
    }

    return 0;
}
