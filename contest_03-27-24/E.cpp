#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <time.h>

using namespace std;

int main()
{
    clock_t t;
    int f;
    t = clock();

    int N, i = 1;
    long long X, n;
    map<int, long long> mapa;
    map<long long, int> rev;
    map<int, long long>::iterator it;
    vector<pair<long long, int>> flag;

    cin >> N >> X;
    while (cin >> n)
    {
        if (n == X / 2)
        {
            flag.push_back(make_pair(n, i));
        }

        if (flag.size() == 2 && (flag.at(0).first + flag.at(1).first == X))
        {
            cout << flag.at(0).second << " " << flag.at(1).second;
            return 0;
        }
        mapa.insert(make_pair(i, n));
        rev.insert(make_pair(n, i));
        i++;
    }

    for (it = mapa.begin(); it != mapa.end(); ++it)
    {
        auto aux = X - it->second;

        if (rev.find(aux)->second == it->first)
        {
            if (rev.find(0) != rev.end())
            {
                std::cout << rev.find(aux)->second << " " << rev.find(0)->second;
                t = clock() - t;
                std::cout << "It took me " << t << "clicks " << ((float)t) / CLOCKS_PER_SEC << " seconds.\n";
                return 0;
            }
        }
        else if (rev.find(aux) != rev.end())
        {
            if (it->second > rev.find(aux)->first)
            {
                std::cout << rev.find(aux)->second << " " << it->first;
            }
            else if (it->second <= rev.find(aux)->first)
            {
                std::cout << it->first << " " << rev.find(aux)->second;
            }
            t = clock() - t;
            std::cout << "It took me " << t << "clicks " << ((float)t) / CLOCKS_PER_SEC << " seconds.\n";
            return 0;
        }
    }

    cout << "IMPOSSIBLE" << endl;

    t = clock() - t;
    std::cout << "It took me " << t << " clicks " << ((float)t) / CLOCKS_PER_SEC << " seconds.\n";
    return 0;
}