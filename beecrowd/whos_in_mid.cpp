#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*void print(vector<int> &c)
{
    for(int i = 0; i < c.size(); i++)
        cout << c[i] << " ";

    cout << "\n";
}*/

int main()
{
    int n, k;

    cin >> n;

    vector<int> cows(n);

    for(int i = 0; i < cows.size(); i++)
        cin >> cows[i];

    sort(cows.begin(), cows.end());

    cout << cows[n/2];

    return 0;
}
