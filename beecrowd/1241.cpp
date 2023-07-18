/*
Paulinho tem em suas m�os um novo problema. Agora a sua professora lhe pediu que constru�sse um programa para verificar, � partir de dois valores muito grandes A e B, se B corresponde aos �ltimos d�gitos de A.

Entrada
A entrada consiste de v�rios casos de teste. A primeira linha de entrada cont�m um inteiro N que indica a quantidade de casos de teste. Cada caso de teste consiste de dois valores A e B maiores que zero, cada um deles podendo ter at� 1000 d�gitos.

Sa�da
Para cada caso de entrada imprima uma mensagem indicando se o segundo valor encaixa no primeiro valor, confome exemplo abaixo.
*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int num;
    string a, b;

     cin >> num;

     while(num != 0)
     {
     cin >> a;
     cin >> b;

    int tamB = b.length();
    int tamA = a.length();


    if(tamB > tamA)
    {
        cout << "nao encaixa" << endl;
        num--;
        continue;
    }


    string sub = a.substr((tamA-tamB), tamB);

    if(sub == b)
        cout << "encaixa" << endl;
    else
        cout << "nao encaixa" << endl;

     num --;

     };

    return 0;
}
