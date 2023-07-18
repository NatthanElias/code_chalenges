/*Solicitaram para que você construisse um programa simples de criptografia. Este programa deve possibilitar enviar mensagens codificadas sem que alguém consiga lê-las. O processo é muito simples. São feitas três passadas em todo o texto.

Na primeira passada, somente caracteres que sejam letras minúsculas e maiúsculas devem ser deslocadas 3 posições para a direita, segundo a tabela ASCII: letra 'a' deve virar letra 'd', letra 'y' deve virar caractere '|' e assim sucessivamente. Na segunda passada, a linha deverá ser invertida. Na terceira e última passada, todo e qualquer caractere a partir da metade em diante (truncada) devem ser deslocados uma posição para a esquerda na tabela ASCII. Neste caso, 'b' vira 'a' e 'a' vira '`'.

Por exemplo, se a entrada for “Texto #3”, o primeiro processamento sobre esta entrada deverá produzir “Wh{wr #3”. O resultado do segundo processamento inverte os caracteres e produz “3# rw{hW”. Por último, com o deslocamento dos caracteres da metade em diante, o resultado final deve ser “3# rvzgV”.

Entrada
A entrada contém vários casos de teste. A primeira linha de cada caso de teste contém um inteiro N (1 ≤ N ≤ 1*104), indicando a quantidade de linhas que o problema deve tratar. As N linhas contém cada uma delas M (1 ≤ M ≤ 1*103) caracteres.
Saída
Para cada entrada, deve-se apresentar a mensagem criptografada.
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
    int n, i =0;
    string str;

    /*ifstream file("entrada.txt");
    if (file.is_open())
        cin.rdbuf(file.rdbuf());*/

    while(true)
    {

        getline(cin, str);
        fflush(stdin);

        n = atoi(str.c_str());

        if(!std::cin)
            break;


        for(int i = 0; i < n; i++)
        {
            getline(cin, str);
            fflush(stdin);

            for(int j = 0; j < str.size(); j++)
            {
                if(isalpha(str[j]))
                    str[j] = (char)((int)str[j] + 3);
            }

            reverse(str.begin(), str.end());

            for(int j = 0; j < str.size(); j++)
            {
                int tam = str.size()/2;

                if(j>= (str.size()/2))
                    str[j] = (char)((int)str[j] -1);
            }

            cout << str << endl;
        }
    }


    return 0;
}

