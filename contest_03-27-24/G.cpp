#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n = 0, i = 0;
    vector<int> p;
    set<int> hey;

    while (!(cin >> n).eof())
    {
        p.push_back(n);
        if ((i % 2 + 1) == 0)
        { // impar
            auto num = abs(p.at(i - 1) - p.at(i));
            hey.insert(num);
        }
        i++;
    }
}