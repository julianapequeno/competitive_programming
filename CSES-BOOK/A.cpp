#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

 

int main(){
    int N;
    ll p,a;
    vector<ll> A;
    vector<ll>::iterator it;
    bool vir = false;
    set<int> marc;
    cin >> N >> p ;
    for(int i  =0; i < N; i++){
        cin >> a;
        A.push_back(a);
    }

    ll i =0;
    int pos,ant = 0;
    sort(A.begin(),A.end());

    it = A.begin();
    pos = 0;
    int soma = 0;
    ll div= 0;
    soma = *it;
    while(i <= p){
        pos = *it;
        for(int j = 0; j < N; j++){
            //base
            if(A.at(j) <= pos){
                if((marc.find(j) != marc.end()) && A.at(j)*2 <= pos){
                    if((it-1) == A.begin()){
                        div = pos-*(it-1);
                    }else{
                        div = (pos-*(it-1)-1);
                    }
                    i += div;
                }else{
                    i++;
                    marc.insert(j);
                    if(i == p)
                        break;
                    }
            }
        }
        if(i == p){
            if(ant == 0)
                break;
            else 
                soma = pos + ant ;
            break;
        }else if(i != p){
            soma += pos;
        }

        ++it;
        if(it == A.end()){
            --it;
            ant += *it;
            vir = true;
            marc.clear();
            it = A.begin();
        }
    }
    cout << soma << endl;

}
