#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n, x;
    set<int> s;
    cin >> n;
    for (int i = 0; i < (n - 1); i++)
    {
        s.insert(i);
    }
    s.insert(-1);

    for (int i = 0; i < (n - 1); i++)
    {
        cin >> x;
        if (s.find(x))
            cout << x;
    }
}