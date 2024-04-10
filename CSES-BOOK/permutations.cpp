#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> m;
    for(int i = 0; i < 5;i++)
        m.push_back(i+1);

    do{
        for(auto a: m)
            cout << a << " ";
        cout << endl;
    }while(next_permutation(m.begin(),m.end()));

    return 0;
}