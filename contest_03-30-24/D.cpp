#include <iostream>
#include <bitset>

using namespace std;

bool possible(int x, int c)
{
    std::bitset<60> foo(x);
    if (foo.count() <= c)
        return true;
    else
        return false;
}

bool popcount(int x, int c)
{
    std::bitset<60> foo(x);
    if (foo.count() == c)
        return true;
    else
        return false;
}

bool XOR(int X, int Y, int C)
{
    std::bitset<60> foo(X);
    std::bitset<60> goo(Y);
    std::bitset<60> resul(X ^ Y);

    if (resul == C)
    {
        cout << foo.count() << " " << goo.count() << " " << resul;
        return true;
    }

    return false;
}

int main()
{
    int a, b;
    long long int C;
    cin >> a >> b >> C;
    std::bitset<60> foo(b);

    for (int i = 0; i < 2 ^ 60; i++)
    {
        if (popcount(i, a))
        {
            for (int j = 0; j < 2 ^ 60; j++)
            {
                if (popcount(j, b))
                {
                    if (XOR(i, j, C))
                    {
                        cout << i << " " << j;
                        return 0;
                    }
                }
            }
        }
    }
    cout << -1;
    return 0;
}