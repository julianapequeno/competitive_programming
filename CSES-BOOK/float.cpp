#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a, b;
    cin >> a >> b;
    if (abs(a - b) < 1e-9) //! Melhor maneira de comparar floats
        cout << "They are equal";
    else
        cout << "They are not equal";
}