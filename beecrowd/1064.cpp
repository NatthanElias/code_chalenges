/*
Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na pr�xima linha, deve-se mostrar a m�dia de todos os valores positivos digitados, com um d�gito ap�s o ponto decimal.

Entrada
A entrada cont�m 6 n�meros que podem ser valores inteiros ou de ponto flutuante. Pelo menos um destes n�meros ser� positivo.

Sa�da
O primeiro valor de sa�da � a quantidade de valores positivos. A pr�xima linha deve mostrar a m�dia dos valores positivos digitados.
*/

#include <iostream>

using namespace std;

int main()
{
    float n[6], media=0, soma=0;
    int positivo=0;

    cout.precision(1);
    cout << fixed;

    for(int i = 0; i<6; i++)
    {
        cin >> n[i];

        if(n[i] > 0)
        {
            positivo++;
            soma+=n[i];
        }
    }
    media = soma/positivo;

    cout << positivo << " valores positivos" << endl << media << endl;

    return EXIT_SUCCESS;
}

