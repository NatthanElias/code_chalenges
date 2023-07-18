/*
4  = 00000000 00000000 00000000 00000100
+6 = 00000000 00000000 00000000 00000110
----------------------------------------
2  = 00000000 00000000 00000000 00000010 (ERRADO)

escrever um programa eficiente que pegaria 2 valores decimais de 32 bits sem sinal como entrada e deveria produzir um n�mero de 32 bits sem sinal como sa�da, ou seja, somando do mesmo modo como o circuito faz.

Entrada
Em cada linha de entrada haver� um par de inteiros separado por um �nico espa�o. A entrada termina com EOF.

Sa�da
Para cada linha de entrada, o programa dever� fornecer uma linha de sa�da, que � o valor ap�s somar dois n�meros no modo �Mofiz�.
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
    unsigned int n, b;

    /*ifstream file("entrada.txt");
    if (file.is_open())
        cin.rdbuf(file.rdbuf());*/

    while(true)
    {

        cin >> b;

        if(!std::cin)
            break;

        cin >> n;


        cout << (n ^ b) << endl;

    }

    return 0;
}
