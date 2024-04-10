#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    char aux;
    cin >> S;

    for (int i = 1; i <= S.size() / 2; i++)
    {
        aux = S[(2 * i) - 1];
        S[(2 * i) - 1] = S[(2 * i) - 2];
        S[(2 * i) - 2] = aux;
    }
    cout << S;
}