/*
Paulinho tem em suas mãos um novo problema. Agora a sua professora lhe pediu que construísse um programa para verificar, à partir de dois valores muito grandes A e B, se B corresponde aos últimos dígitos de A.

Entrada
A entrada consiste de vários casos de teste. A primeira linha de entrada contém um inteiro N que indica a quantidade de casos de teste. Cada caso de teste consiste de dois valores A e B maiores que zero, cada um deles podendo ter até 1000 dígitos.

Saída
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
