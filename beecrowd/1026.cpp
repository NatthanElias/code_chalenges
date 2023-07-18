/*
4  = 00000000 00000000 00000000 00000100
+6 = 00000000 00000000 00000000 00000110
----------------------------------------
2  = 00000000 00000000 00000000 00000010 (ERRADO)

escrever um programa eficiente que pegaria 2 valores decimais de 32 bits sem sinal como entrada e deveria produzir um número de 32 bits sem sinal como saída, ou seja, somando do mesmo modo como o circuito faz.

Entrada
Em cada linha de entrada haverá um par de inteiros separado por um único espaço. A entrada termina com EOF.

Saída
Para cada linha de entrada, o programa deverá fornecer uma linha de saída, que é o valor após somar dois números no modo “Mofiz”.
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
