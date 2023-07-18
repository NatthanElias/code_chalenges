/*A senha deve conter, no m�nimo, uma letra mai�scula, uma letra min�scula e um n�mero;
A mesma n�o pode ter nenhum caractere de pontua��o, acentua��o ou espa�o;
Al�m disso, a senha pode ter de 6 a 32 caracteres.
Entrada
A entrada cont�m v�rios casos de teste e termina com final de arquivo. Cada linha tem uma string S, correspondente a senha que � inserida pelo usu�rio no momento do cadastro.

Sa�da
A sa�da cont�m uma linha, que pode ser �Senha valida.�, caso a senha tenha cada item dos requisitos solicitados anteriormente, ou �Senha invalida.�, se um ou mais requisitos n�o forem atendidos.
*/
#include <iostream>
#include <regex>

using namespace std;

int main() {
    string s;
    regex validacao("^[A-Za-z0-9]{6,32}[^\b.,;:�-�][A-Za-z0-9]+$");
    while(getline(cin, s))
    {
        bool teste = regex_match(s, validacao);

        cout << (teste ? "Senha valida." : "Senha invalida.") << "\n";
    }


    return 0;
}
