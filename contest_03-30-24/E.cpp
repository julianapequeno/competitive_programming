#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    long int N, Q, x;
    cin >> N >> Q;
    vector<long int> vec(N, 0);
    set<long int> s;

    for (int i = 0; i < Q; i++)
    {
        cin >> x;
        if (s.find(x) == s.end())
        {
            s.insert(x);
        }
        else
        {
            s.erase(x);
        }
        for (auto a : s)
        {
            vec.at(a - 1) += s.size();
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (i + 1 == N)
            cout << vec.at(i);
        else
            cout << vec.at(i) << " ";
    }
}