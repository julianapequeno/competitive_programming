#include <bits/stdc++.h>
// MACROSS
#define PB push_back
#define MP make_pair
#define F first
#define LOOP(i, a, b) for (int i = a; i < b; i++)
using namespace std;

// TYPEDEF
typedef long long ll;
typedef pair<ll, ll> p;
typedef vector<p> vec;

int main()
{
    ll x;
    vec v;
    cin >> x;
    v.PB(MP(x, x));

    LOOP(i, 0, 7)
    {
        cout << "Hello Hello " << endl;
    }

    cout << v.at(0).F << endl;
}