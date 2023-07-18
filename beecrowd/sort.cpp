#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

struct Funcionario
{
    int idade;
    string nome;

};


void printV(vector<int> &nums)
{
    for (int i=0; i<nums.size(); i++ )
        cout << nums[i] << " ";

    cout << endl;
}

void printFuncionarios(vector<Funcionario> &funcs)
{
    cout << endl << endl;
    for (int i=0; i<funcs.size(); i++ )
        cout << funcs[i].idade << " " << funcs[i].nome << endl;

}

bool comparaCrescente(int i, int j)
{
    if(i < j)
        return true;
    else
        return false;

}

bool comparaDecrescente(int i, int j)
{
    if(i < j)
        return false;
    else
        return true;

}


bool comparaFuncionario(Funcionario a, Funcionario b)
{
    if(a.idade < b.idade)
        return true;
    else if(a.idade == b.idade && a.nome < b.nome)
        return true;
    else
        return false;

}


int main ()
{

    vector<int> numeros;
    numeros.push_back(5);
    numeros.push_back(1);
    numeros.push_back(2);
    numeros.push_back(50);
    numeros.push_back(20);
    numeros.push_back(15);
    numeros.push_back(22);
    numeros.push_back(30);



    printV(numeros);


    sort(numeros.begin(), numeros.end(), comparaDecrescente);

    printV(numeros);


     vector<Funcionario> funcionarios;

    Funcionario f;

    f.idade = 10;
    f.nome = "Joao";

    funcionarios.push_back(f);

    f.idade = 20;
    f.nome = "Ana";
    funcionarios.push_back(f);


    f.idade = 2;
    f.nome = "Maria";
    funcionarios.push_back(f);


    f.idade = 15;
    f.nome = "Jose";
    funcionarios.push_back(f);

    f.idade = 15;
    f.nome = "Bruno";
    funcionarios.push_back(f);

    printFuncionarios(funcionarios);


    sort(funcionarios.begin(), funcionarios.end(), comparaFuncionario);

    printFuncionarios(funcionarios);

    return 0;
}
