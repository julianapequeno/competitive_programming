#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<char> dna = {'A', 'C', 'G', 'T'};
    string::iterator st;
    cin >> s;

    int ind, last, maior, lastMaior = 0;

    st = s.begin();
    while (true)
    {
        for (int i = 0; i < 4; i++)
        {
            ind = s.find_first_of(dna[i]);
            last = s.find_first_not_of(dna[i], ind);
            if (last == -1)
                last = s.size();
            // cout << ind << ' ' << last << endl;
            if (last - ind > maior)
            {
                maior = last - ind;
                lastMaior = last;
            }
        }
        if (lastMaior >= s.size())
            break;
        s = s.substr(lastMaior);
    }
    cout << maior << endl;
}
