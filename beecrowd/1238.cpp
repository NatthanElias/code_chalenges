/*Implemente um programa denominado combinador, que recebe duas strings e deve combiná-las, alternando as letras de cada string, começando com a primeira letra da primeira string, seguido pela primeira letra da segunda string, em seguida pela segunda letra da primeira string, e assim sucessivamente. As letras restantes da cadeia mais longa devem ser adicionadas ao fim da string resultante e retornada.

Entrada
A entrada contém vários casos de teste. A primeira linha contém um inteiro N que indica a quantidade de casos de teste que vem a seguir. Cada caso de teste é composto por uma linha que contém duas cadeias de caracteres, cada cadeia de caracteres contém entre 1 e 50 caracteres inclusive.

Saída
Combine as duas cadeias de caracteres da entrada como mostrado no exemplo abaixo e exiba a cadeia resultante.
*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int num;
    string a, b;

    cin >> num;

    for(int i = 0; i < num; i++)
    {
        string  aux = "";

        cin >> a;
        cin >> b;

        int tam = 0;
        string sub;

        if(a.size() > b.size())
        {
            tam = b.size();
            sub = a.substr(tam);
        }

        else
        {
            tam = a.size();
            sub = b.substr(tam);
        }

        for(int i = 0; i < tam; i++)
            aux = aux + a[i] + b[i];


        cout << aux + sub << endl;

    }

    return 0;
}


