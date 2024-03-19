#include <iostream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int N = 0, cont = 0;
    std::cin >> N;

    set<string> S;
    string str;

    for (int i = 0; i < N; i++)
    {
        cin >> str;
        auto a_C = str;
        std::reverse(a_C.begin(), a_C.end());
        if (S.find(a_C) != S.end())
        {
            continue;
        }
        else
        {
            S.insert(str);
        }
    }
    cout << S.size();
}