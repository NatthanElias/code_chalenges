#include <iostream>
#include <vector>
#include <algorithm>

//https://pt.wikipedia.org/wiki/Bubble_sort
//https://www.geeksforgeeks.org/selection-sort/


using namespace std;

struct Bloco
{
    int num=0;
    int cor=0;
};


/*
10 5
4 2
7 3
3 1
1 2
5 4
6 3
2 3
8 5
10 2
9 2
*/

/*
10 5
4 2
7 3
3 1
1 2
6 3
2 3
8 5
5 4
10 2
9 2
*/



void selectionSort(vector<Bloco> &v)
{
    int  minIdx;
    for (int i = 0; i < v.size()-1; i++)
    {
        minIdx = i;
        for (int j = i+1; j < v.size(); j++)
        {
            if(v[j].num < v[minIdx].num && v[j].cor == v[minIdx].cor )
                minIdx = j;
        }
        if (i != minIdx)
        {
            Bloco aux = v[i];
            v[i] = v[minIdx];
            v[minIdx] = aux;
        }
    }

}


bool verificaOrdenacao(vector<Bloco> &v)
{
    for (int i = 0; i < v.size()-1; i++)
    {
        if(v[i].num > v[i+1].num)
            return false;
    }

    return true;
}



int main ()
{
    int  N, K;

    cin >> N;
    cin >> K;

    vector<Bloco> blocos(N);

    for(int i=0; i<N; i++)
    {

        cin >> blocos[i].num;
        cin >> blocos[i].cor;

        if(!std::cin)
            break;
    }

    cout << endl;
    for(int i=0; i<N; i++)
        cout << blocos[i].num << " " << blocos[i].cor << endl;

    selectionSort(blocos);

    cout << endl;
    for(int i=0; i<N; i++)
        cout << blocos[i].num << " " << blocos[i].cor << endl;


    if(verificaOrdenacao(blocos))
        cout << "Y" << endl;
    else
        cout << "N" << endl;




    return 0;
}
